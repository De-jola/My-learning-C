#include <stdio.h>
#include <stdlib.h>
/**
 * Prints the alphabet in lowercase in reverse
 */
int main(void)
{
	char letter = 'z';

	while(letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return 0;
}
