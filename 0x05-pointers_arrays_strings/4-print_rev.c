#include "main.h"
/**
 * print_rev - function that prints a string
 * in reverse, followed by a new line.
 * @s: string
 */
void print_rev(char *s)
{
	int i, j;

	i = j = 0;
	while (s[i] != '\0')
	{
		j = i;
		i++;
	}
	for (i = j; i >= 0; i--)
	{
		if (s[i] != '\0')
			_putchar(s[i]);
	}
	_putchar('\n');
}
