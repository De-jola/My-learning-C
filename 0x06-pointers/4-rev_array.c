#include <stdio.h>
#include "main.h"
//A program that reverses an array of integeres

void reverse_array(int *a, int n)
{
	int i = 0;
	int b[n];

	while(i < n)
	{
		b[i] = a[i];
		i++;
	}
	i = 0;
	n = n - 1;
	while(n >= 0)
	{
		a[i] = b[n];
		i++;
		n--;
	}
}

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
