#include <stdio.h>
#include "main.h"
//A program that converts a string to integer

int _atoi(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		if(s[i] >= '0' && s[i] <= '9')
		{
			if(s[i - 1] == '-')
			{
				s[i + 1] = 0 - s[i];
				printf("%d\n", s[i]);
			}
			else
				printf("%d\n", s[i]);
		}
		else
			return 0;
		i++;
	}
}

int main(void)
{
	int nb;

	nb = _atoi("98");
	printf("%d\n", nb);
	nb = _atoi("-402");
	printf("%d\n", nb);
	nb = _atoi("          ------++++++-----+++++--98");
	printf("%d\n", nb);
	nb = _atoi("214748364");
	printf("%d\n", nb);
	nb = _atoi("0");
	printf("%d\n", nb);
	nb = _atoi("Suite 402");
	printf("%d\n", nb);
	nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
	printf("%d\n", nb);
	nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
	printf("%d\n", nb);
	return (0);
}
