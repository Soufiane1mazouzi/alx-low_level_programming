#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @str: string.
 * Return: str.
 */
char *leet(char *str)
{
	char code[][2] = {{'A', '4'}, {'E', '3'}, {'O', '0'}, {'T', '7'}, {'L', '1'}};
	int i, j = 0;

	while (str[j] != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (str[j] == code[i][0] || str[j] == code[i][0] + 32)
				str[j] = code[i][1];
		}
		j++;
	}
	return (str);
}
