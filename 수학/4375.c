#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int m;
	long long i;

	while (scanf("%d", &n) != EOF) {
		i = 1;
		m = 1;
		while (1) {
			if (m % n == 0) {
				printf("%d\n", i);
				break;
			}
			else {
				m = (m % n) * 10 + 1;
				i++;
			}
		}
	}

	return 0;
}
