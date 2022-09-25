#include <stdio.h>
#include "main.h"
//A program that prints the second half of a string

void puts_half(char *str)
{
	int i = 0;
	int len;

	while(str[i] != '\0')
	{
		i++;
	}
	if(i % 2 != 0)
	{
		len = (i - 1) / 2;
		while(str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	else
	{
		len = i / 2;
		while(str[len] != '\0')
		{
			_putchar(str[len]);
			len++;
		}
	}
	_putchar('\n');
}

int main(void)
{
	char *str, *str1;

	str = "0123456789";
	str1 = "Adejola";
	puts_half(str);
	puts_half(str1);
	return 0 ;
}
