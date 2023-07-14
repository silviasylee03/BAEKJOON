#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int n, m;
	int primeNum[1000001] = {0, 1};

	scanf("%d %d", &n, &m);

	for (int i = 2; i <= m; i++)
		for (int j = 2; j * i <= m; j++)
			primeNum[j * i] = 1;

	for (int i = n; i <= m; i++)
		if (primeNum[i] == 0)
			printf("%d\n", i);

	return 0;
}
