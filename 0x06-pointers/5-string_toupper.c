#include <stdio.h>
#include "main.h"
//A program that changes all lowercase letters of a string to uppercase

char *string_toupper(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
			i++;
		}
		else
			i++;
	}
	return str;
}

int main(void)
{
	char str[] = "Look up!\n";
	char *ptr;

	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	return 0;
}
