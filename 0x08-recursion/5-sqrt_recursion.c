#include "main.h"
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: integer
 * Return: 0 or -1
 */
int _sqrt_recursion(int n)
{
	int sqr = 0;

	if (n < 0)
		return (-1);
	sqr = _sqrt_test(n, sqr);
	if (sqr * sqr == n)
		return (sqr);
	else
		return (-1);
}
/**
 * _sqrt_test - function that test sqrt
 * @n: integer
 * @sqr: test sqrt
 * Return: sqrt
 */
int _sqrt_test(int n, int sqr)
{
	if (sqr * sqr >= n)
		return (sqr);
	sqr++;
	return (_sqrt_test(n, sqr));
}
