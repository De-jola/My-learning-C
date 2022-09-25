#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints the numbers of the hexadecimal in lowercase
 */
int main(void)
{
	int n;
	char letter = 'a';

	n = 0;
	while(n <= 9)
	{
		putchar(n + '0');
		n++;
	}
	while(letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return 0;
}
