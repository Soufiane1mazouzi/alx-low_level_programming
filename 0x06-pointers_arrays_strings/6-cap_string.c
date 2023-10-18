#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string.
 * Separators of words: space, tabulation
 * new line, ,, ;, ., !, ?, ", (, ), {, and }
 * @str: string
 * Return: str
 */
char *cap_string(char *str)
{
	char c[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'
	};
	int i = 0, j = 0;

	while (str[i] != '\0')
	{
		while (c[j] != '\0')
		{
			if (str[i] == c[j] && (str[i + 1] >= 97 && str[i + 1] <= 122))
				str[i + 1] -= 32;
			j++;
		}
		j = 0;
		i++;
	}
	if (str[0] >= 97 && str[0] <= 122)
		str[0] -= 32;
	return (str);
}
