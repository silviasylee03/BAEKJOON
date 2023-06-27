// 모든 순열
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

pick(int n, int* bucket, int m, int k)
{
	int i, lastIndex, smallest, item = 0;

	if (k == 0) { // 뽑을 게 없으면
		for (i = 0; i < m; i++)
			printf("%d ", bucket[i] + 1);
		printf("\n");
		return;
	}

	lastIndex = m - k - 1;
	smallest = 0;

	for (item = smallest; item < n; item++) {
		int j = 0, flag = 0;

		for (j = 0; j <= lastIndex; j++)
			if (bucket[j] == item)
				flag = 1;

		if (flag == 1)
			continue;

		bucket[lastIndex + 1] = item;
		pick(n, bucket, m, k - 1);
	}
}

int main(void)
{
	int N;
	int* bucket;

	scanf("%d", &N);

	bucket = (int*)malloc(sizeof(int) * N);

	pick(N, bucket, N, N);

	return 0;
}
