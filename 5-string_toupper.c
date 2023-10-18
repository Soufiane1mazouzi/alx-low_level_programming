#include "main.h"
/**
 * string_toupper - function that changes all lowercase letters of a
 * string to uppercase.
 * @str: string of char
 * Return: pointer to char
 */
char *string_toupper(char *str)
{
	int i = 0, j;

	while (str[i] != '\0')
	{
		if (str[i] <= 122 && str[i] >= 97)
		{
			j = str[i] - 97;
			str[i] = 65 + j;
		}
		i++;
	}
	return (str);
}
