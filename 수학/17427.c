#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N;
	long long sum = 0;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++) {
		sum += (N / i) * i;
	}

	printf("%d\n", sum);

	return 0;
}
