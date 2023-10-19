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
	char *result = s;
	char rot13_upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13_lower[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	while (*s)
	{
		if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
		{
			for (i = 0; i < 26; i++)
			{
				if (*s == rot13_upper[i])
				{
					*s = rot13_upper[(i + 13) % 26];
					break;
				}
				else if (*s == rot13_lower[i])
				{
					*s = rot13_lower[(i + 13) % 26];
					break;
				}
			}
		}
		s++;
	}

	return result;
}
