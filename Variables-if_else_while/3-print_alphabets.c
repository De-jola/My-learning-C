#include <stdio.h>
#include <stdlib.h>
/**
 * A program that prints the alphabets in lowercase
 * and then in uppercase
 */
int main(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	letter = 'A';
	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return 0;
}
