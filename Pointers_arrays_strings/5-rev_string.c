#include <stdio.h>
#include "main.h"
//A program that reverses a string

void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char *str;

	while(s[i] != '\0')
	{
		str[i] = s[i];
		i++;
	}
	while(i >= 0)
	{
		s[j] = str[i];
		i--;
		j++;
	}

}

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return 0;

}
