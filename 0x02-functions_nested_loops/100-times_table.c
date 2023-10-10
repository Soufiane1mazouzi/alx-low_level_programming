#include "main.h"
/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: times table
 */
void print_times_table(int n)
{
	int j, i, r;

	if (n <= 15 && n >= 0)
	{
		for (j = 0; j <= n; j++)
		{
			r = 0;
			for (i = 0; i <= n; i++)
			{
				if (r < 10)
					_putchar(r + '0');
				else if (r < 100)
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r >= 100)
				{
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
				r += j;
				if (i != n)
				{
					_putchar(',');
					_putchar(' ');
					if (r < 10)
					{
						_putchar(' ');
						_putchar(' ');
					}
					else if (r < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
