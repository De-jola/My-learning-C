#include <stdio.h>
#include <stdlib.h>
#include "main.h"
//A program that prints numbers from n to 98
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	printf("%d\n", n);	
	}
	else if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n);
	}
}

int main(void)
{
	print_to_98(0);
	print_to_98(98);
	print_to_98(111);
	print_to_98(81);
	print_to_98(-10);
	return 0;
}
