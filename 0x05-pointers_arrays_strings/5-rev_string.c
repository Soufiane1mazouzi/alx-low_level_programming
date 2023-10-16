#include "main.h"
/**
 * rev_string -  function that reverses a string.
 * @s: string
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char rev;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		rev = s[i];
		s[i] = s[j];
		s[j] = rev;
	}
}
