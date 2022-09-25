#include <stdio.h>
#include "main.h"
// A program that checks for a digit

int _isdigit(int c)
{
	if(c >= 48 && c <= 57)
	{
		return 1;
	}
	return 0;
}

int main(void)
{
	char c;

	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	return 0;
}
