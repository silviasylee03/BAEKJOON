// 1, 2, 3 더하기 쉽게 변형
// 중복 조합
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void pick(int n, int* bucket, int m, int k)
{
	int i, lastIndex, smallest;
	int total = 0;

	lastIndex = m - k - 1;

	for (i = 0; i <= lastIndex; i++)
		total += bucket[i] + 1;

	if (total == n) { // 다 뽑았으면
		for (i = 0; i <= lastIndex; i++) {
			if (i == m - 1)
				printf("%d ", bucket[i] + 1);
			else
				printf("%d + ", bucket[i] + 1);
		}
		printf("\n");
		return;
	}
	else if (total > n)
		return;

	if (m == k)
		smallest = 0;
	else
		smallest = bucket[lastIndex];

	for (i = smallest; i < n; i++) {
		bucket[lastIndex + 1] = i;
		pick(n, bucket, m, k - 1);
	}
}

int main(void)
{
	int n;
	int* bucket;

	scanf("%d", &n);
	bucket = (int*)malloc(sizeof(int) * n);

	pick(n, bucket, n, n);

	return 0;
}
