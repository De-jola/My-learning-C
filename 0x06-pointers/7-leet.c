#include <stdio.h>
#include "main.h"
//A program that encodes a string to leet

char *leet(char *str)
{
	char *src = "aeotl";
	char *num_src = "43071";
	int i = 0;
	int j = 0;

	while(str[i] != '\0')
	{
		while(src[j] != '\0' && num_src[j] != '\0')

		{
			if(str[i] == src[j] || str[i] == (src[j] - 32))
			{
				str[i] = num_src[j];
			}
			j++;
		}
		i++;
		j = 0;
	}
	return str;
}

int main(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return 0;
}
