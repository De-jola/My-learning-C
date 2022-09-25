#include <stdio.h>
#include <stdlib.h>
/**
 * prints the alphabet without q and e
 */
int main(void)
{
	char letter = 'a';

	while(letter <= 'z')
	{
		if(letter == 'e' || letter == 'q')
		{
			letter++;
		}
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return 0;
}
