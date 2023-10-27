#include "main.h"
/**
 * _isalpha - checks for lowercase and uppercase character
 *
 * Description: function that checks for lowercase
 * and uppercase character
 *
 * @c: input character
 * Return: 0 or 1
 */
int _isalpha(int c)
{
	if (c <= 122 && c >= 97)
	{
		return (1);
	}
	else if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
