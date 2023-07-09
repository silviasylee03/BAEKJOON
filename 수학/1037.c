#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n; // 약수의 개수
	int m; // 약수
	int A;
	int min = 999, max = 0;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);

		if (min > m)
			min = m;
		if (max < m)
			max = m;
	}

	printf("%d\n", min * max);
}
