#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - program outputs if n positive, negative or null
 *
 * Description: generate random num and outputs if it is
 * positive, negative or null
 *
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n != 0)
	{
		printf("%d is positive\n", n);
	}
	else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
