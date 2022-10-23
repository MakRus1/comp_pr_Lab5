#include "fun.h"

#include <stdio.h>

#define N 10

void work()
{
	int D[N];

	printf("Input array:\n");
	for (int i = 0; i < N; i++)
	{
		printf("D[%d]: ", i);
		scanf("%d", &D[i]);
	}
	printf("\n\n");

	printf("Your array: ");
	for (int i = 0; i < N; i++)
	{
		printf("%d ", D[i]);
	}
	printf("\n\n");

	int count = 0;

	for (int i = 0; i < N; i++)
	{
		if (D[i] < 0) count++;
	}

	printf("Count of negative = %d\n\n", count);
}