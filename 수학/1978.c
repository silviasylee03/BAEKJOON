#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int isPrime(int m)
{
	int cnt = 0;

	for (int i = 1; i <= m; i++)
		if (m % i == 0)
			cnt++;
	
	if (cnt == 2)
		return 1;
	else
		return 0;
}

int main(void)
{
	int count = 0;
	int n, m;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		
		if (isPrime(m) == 0)
			continue;
		else
			count++;
	}

	printf("%d\n", count);

	return 0;
}
