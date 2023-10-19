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
	char rot13[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_encoded[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s)
	{
		for (i = 0; rot13[i]; i++)
		{
			if (*s == rot13[i])
			{
				*s = rot13_encoded[i];
				break;
			}
		}
		s++;
	}

	return original;
}
