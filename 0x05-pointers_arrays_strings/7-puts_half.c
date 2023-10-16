#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string
 */
void puts_half(char *str)
{
	int i = 0, j, n;

	while (str[i] != '\0')
	{
		i++;
		j = i;
	}
	if ((j % 2) == 0)
		n = j / 2;
	else
		n = 1 + (j - 1) / 2;
	for (i = n; i < j; i++)
		if (str[i] != '\0')
			_putchar(str[i]);
	_putchar('\n');
}
