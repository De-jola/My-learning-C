#include <stdio.h>
#include "main.h"
//A program that returns the length of a string

int _strlen(char *s)
{
	int i = 0;

	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}

int main(void)
{
	char *str;
	int len;

	str  = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return 0;
}
