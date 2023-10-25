#include "main.h"
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: integer
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1)
		return (0);
	return (test_prime(n, i));
}
/**
 * test_prime - test for prime integer
 * @n: integr
 * @i: count
 * Return: 0 or 1
 */
int test_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (i == n)
			return (1);
		else
			return (0);
	}
	i++;
	return (test_prime(n, i));
}
