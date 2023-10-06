#include <stdio.h>
/**
 * main - print all possible combo of 2 digits
 *
 * Description: print combination of two digits
 * separated by , followed by a space
 *
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (m = '0'; m <= '8'; m++)
	{
		for (n = '1'; n <= '9'; n++)
		{
			if (n > m)
			{
				putchar(m);
				putchar(n);
				if (m != '8' || n != '9')
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
