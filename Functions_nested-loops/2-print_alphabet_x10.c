#include <stdio.h>
#include "main.h"
//A program that prints the alphabets in lowercase 10 times

void print_alphabet_x10(void)
{
	char a = 'a';
	int i = 0;

	while (i < 10)
	{
		while (a >= 'a' && a <= 'z')
		{
			_putchar(a);
			a++;
		}
		i++;
		a = 'a';
		_putchar('\n');
	}
}

int main(void)
{
	print_alphabet_x10();
	return 0;
}
