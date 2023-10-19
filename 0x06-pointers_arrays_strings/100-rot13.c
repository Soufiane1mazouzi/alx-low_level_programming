#include "main.h"

/**
 * rot13 - Encodes a string using ROT13
 * @s: The input string to be encoded
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
	char *original = s;
	char *input = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *output = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i, j;

	while (*s)
	{
		i = 0;
		while (input[i])
		{
			if (*s == input[i])
			{
				*s = output[i];
				break;
			}
			i++;
		}
		s++;
	}

	return original;
}
