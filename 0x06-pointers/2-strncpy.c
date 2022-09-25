#include <stdio.h>
#include "main.h"
//A program that copies a string

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int len = 0;
	
	while(src[len] != '\0')
	{
		len++;
	}
	while(j < n)
	{
		if(j == len)
		{
			dest[i] = '\0';
			break;
		}
		else
		{	dest[j] = src[j];
			i++;
			j++;
		}
	}
	return dest;
}


int main(void)
{
    char s1[98];
    char *ptr;
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
