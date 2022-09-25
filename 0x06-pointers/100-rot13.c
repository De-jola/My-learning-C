#include <stdio.h>
#include "main.h"
//A program that encodes a string using rot13

char *rot13(char *str)
{
	int i = 0;
	int j = 0;
	char *src = "abcdefghijklmnopqrstuvwxyz";

	while(str[i] != '\0')
	{
		while((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90))
		{
			if((str[i] + 13 >= 123 && str[i] + 13 <= 135)|| (str[i] + 13 >= 91 && str[i] + 13 <= 103))
			{
				str[i] = (str[i] + 13) - 26;
			}
			else
				str[i] = str[i] + 13;
			i++;
		}
		i++;
		j = 0;
	}
	return str;
}

int main(void)
{    char s[] = "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) is a simple letter substitution cipher.\n";
    char *p;

    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    printf("------------------------------------\n");
    p = rot13(s);
    printf("%s", p);
    printf("------------------------------------\n");
    printf("%s", s);
    return (0);
}
