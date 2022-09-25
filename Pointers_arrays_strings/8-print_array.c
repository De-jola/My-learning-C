#include <stdio.h>
#include <stdlib.h>
#include "main.h"
//A program that prints n elements of an array of integers

void print_array(int *a, int n)
{
	int i = 0;

	while(i < n - 1)
	{
		printf("%d, ", a[i]);
		i++;
	}
	printf("%d\n", a[i]);
}

int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return 0;
}
