#include "main.h"
/**
 * print_alphabet - alphabet in lowercase
 *
 * Description: function that prints the alphabet, in lowercase
 *
 * Return: 0
 */
void print_alphabet(void)
	{
		int i;

		for (i = 97; i <= 122; i++)
			_putchar(i);
		_putchar('\n');
	}
