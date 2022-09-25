#include <stdio.h>
#include "main.h"
//A function that prints the alphabet in lowercase
void print_alphabet(void)
{
	char a = 'a';

	while(a >= 'a' && a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

int main(void)
{
	print_alphabet();
	return 0;
}
