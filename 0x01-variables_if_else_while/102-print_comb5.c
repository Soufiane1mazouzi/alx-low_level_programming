#include <stdio.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 *
 * Description: from 0 to 99, using only putchar
 * and 00 01 considered same as 01 00
 *
 * Return: 0
 */
int main(void)
{
	int i, j;

	for (j = 0; j < 100; j++)
	{
		for (i = 0; i < 100; i++)
		{
			if (i > j)
			{
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				putchar(' ');
				putchar((i / 10) + 48);
				putchar((i % 10) + 48);
				if (i != 99 || j != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
