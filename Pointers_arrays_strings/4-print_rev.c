#include <stdio.h>
#include "main.h"
//A program that prints a string in reverse

void print_rev(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		i++;
	}

	while(i >= 0)
	{
		_putchar(str[i]);
		i--;
	}
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Issac Asimov";

	print_rev(str);
	return 0;
}
