#include <stdio.h>
#include <stdlib.h>
//A program that finds and prints the largest prime factor of a number

void print_prime_factor(unsigned long long int n)
{
	unsigned long long int i = 1;
	unsigned long long int j = 2;
	unsigned long long int flag = 0;
	unsigned long long int k = 0;

	while(i <= n)
	{
		if(n % i == 0)
		{
			while(j < i / 2)
			{
				if(i % j == 0)
				{
					flag = 1;
					break;
				}
				j++;
			}
			if(flag == 0 && i != 1)
			{
				k = i;
			}
		}
		i++;
		j = 2;
		flag = 0;
	}
	printf("%llu\n", k);
}

int main(void)
{
//	print_prime_factor(12);
	print_prime_factor(1231952);
	print_prime_factor(612852475143);
	return 0;
}
