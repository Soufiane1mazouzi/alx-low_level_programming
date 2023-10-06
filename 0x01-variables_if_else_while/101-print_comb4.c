#include <stdio.h>
/**
 * main - print all possible combo of 3 digits
 *
 * Description: print combination of three digits
 * separated by , followed by a space
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;
	int l;

	for (m = '0'; m <= '7'; m++)
	{
		for (n = '1'; n <= '8'; n++)
		{
			for (l = '2'; l <= '9'; l++)
			{
				if (n > m && l > n)
				{
					putchar(m);
					putchar(n);
					putchar(l);
					if (m != '7' || n != '8')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
