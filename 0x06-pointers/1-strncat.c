#include <stdio.h>
#include "main.h"
//A program that concatenates two strings using at most n bytes from src

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int len = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	while(src[len] != '\0')
	{
		len++;
	}
	while(j < n)
	{
		if(j == len)
		{
			dest[i + j] = '\0';
			break;
		}
		else
		{	dest[i + j] = src[j];
			j++;
		}
	}
	return dest;

}

int main(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	return 0;
}
