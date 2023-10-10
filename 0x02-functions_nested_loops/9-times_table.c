#include "main.h"
/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
	{
		int j, i, r;

		for (j = 0; j < 10; j++)
		{
			r = 0;
			for (i = 0; i < 10; i++)
			{
				if (r < 10)
					_putchar(r + '0');
				else
				{
					_putchar((r / 10) + '0');
					_putchar((r % 10) + '0');
				}
				r += j;
				if (i != 9)
				{
					_putchar(',');
					_putchar(' ');
					if (r < 10)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
