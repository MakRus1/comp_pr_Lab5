#include "fun.h"

#include <stdio.h>

#define N 3
#define M 4

void work()
{
	int A[N][M];

	printf("Input matrix:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("\n\n");

	printf("Your matrix:\n");
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (A[i][j] < 0) count++;
		}
	}

	printf("Count of negative = %d\n\n", count);
}