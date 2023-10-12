#include <stdio.h>
/**
 * main - program that finds and prints the largest prime factor
 * of the number 612852475143, followed by a new line.
 *
 * Return: 0
 */
int main(void)
{
	long int num = 612852475143;
	long int prime, fact, i, j;

	for (i = 2; i * i <= num; i++)
	{
		j = 2;
		while (i % j != 0)
		{
			j++;
		}
		if (j == i)
			prime = i;
		while (num % prime == 0)
		{
			num /= prime;
			fact = prime;
		}
	}
	if (num / fact != 1)
		fact = num;
	printf("%ld\n", fact);
	return (0);
}
