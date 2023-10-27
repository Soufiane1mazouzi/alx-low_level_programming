#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * Description: function that checks for lowercase character
 *
 * @c: input character
 * Return: 0 or 1
 */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}
