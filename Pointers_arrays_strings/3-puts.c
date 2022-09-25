#include <stdio.h>
#include "main.h"
//A program that prints a string, followed by a new line

void _puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Issac Asimov";
	_puts(str);
	return 0;
}
