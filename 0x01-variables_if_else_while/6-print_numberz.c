#include <stdio.h>
/**
 * main - print a string of numbers
 *
 * Description: print numbers of base 10 using only putchar
 * with no char var
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}
