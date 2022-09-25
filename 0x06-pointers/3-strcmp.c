#include <stdio.h>
#include "main.h"
//A program that compares two strings

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while(s1[i] != '\0')
		i++;
	while(s2[j] != '\0')
		j++;
	if(i < j)
		return (-15);
	else if(i > j)
		return (15);
	else if(i == j && s1[i] == s2[j])
		return 0;

}

int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
