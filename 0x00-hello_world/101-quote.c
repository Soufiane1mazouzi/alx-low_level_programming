#include <stdio.h>
/**
 * main - print a string using putchar
 *
 * Description: print a sting using putchar within a loop condition
 *
 * Return: 1
 */
int main(void)
{
	char strg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int i = 0;

	while (strg[i] != '\0')
	{
		putchar(strg[i]);
		i++;
	}
	putchar('\n');
	return (1);
}
