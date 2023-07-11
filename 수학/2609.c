#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	int i, j;

	scanf("%d %d", &a, &b);

	// 최대공약수 구하기

	if (a < b)
		i = a;
	else
		i = b;

	while (1) {
		if (a % i == 0 && b % i == 0)
			break;
		else
			i--;

		if (i == 1)
			break;
	}

	printf("%d\n", i);
	printf("%d", (a * b) / i);

	return 0;
}
