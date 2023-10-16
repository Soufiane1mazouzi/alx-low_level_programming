#include "main.h"
/**
 * print_array - function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: array of integers
 * @n: umber of elements
 */
void print_array(int *a, int n)
{
	int i, j, k;

	for (i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			_putchar('-');
			a[i] *= -1;
		}
		j = 1;
		k = a[i];
		while (k > 9)
		{
			j *= 10;
			k = k / 10;
		}
		while (j > 0)
		{
			_putchar((a[i] / j) + '0');
			a[i] = a[i] % j;
			j = j / 10;
		}
		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
