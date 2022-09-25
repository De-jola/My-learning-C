#include <stdio.h>
#include <stdlib.h>
#include "main.h"
//Fizz-Buzz

void fizz_buzz(void)
{
	int i = 1;

	while(i < 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if(i % 5 == 0)
			printf("Buzz ");
		else if(i % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", i);
		i++;
	}
	printf("Buzz\n");
}

int main(void)
{
	fizz_buzz();
	return 0;
}
