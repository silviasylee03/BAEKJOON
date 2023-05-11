// selection sort
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

void selectionSort(int* A, int n)
{
	int i, j;
	int max, max_index;

	for (i = 0; i < n - 1; i++) {
		max = A[0];
		max_index = 0;

		for (j = 1; j < n - i; j++) {
			if (max < A[j]) {
				max = A[j];
				max_index = j;
			}
		}

		A[max_index] = A[n - 1 - i];
		A[n - 1 - i] = max;
	}
}

int main(void)
{
	int* A;
	int n; 

	scanf("%d", &n);

	A = (int*)malloc(sizeof(int) * n);
	if (!A)
		return 0;

	for (int i = 0; i < n; i++)
		scanf("%d", &A[i]);

	selectionSort(A, n);

	for (int i = 0; i < n; i++)
		printf("%d\n", A[i]);

	free(A);
	return 0;
}