#include "main.h"
#include <string.h>
/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: string.
 * Return: 0 or 1.
 */
int is_palindrome(char *s)
{
	int i = 0;
	unsigned long int j = strlen(s) - 1;

	if (s == 0)
		return (1);
	return (test_palindrome(s, i, j));
}
/**
 * test_palindrome - test for palindrome string.
 * @s: string.
 * @i: counter.
 * @j: lenght of s.
 * Return: 0 or 1.
 */
int test_palindrome(char *s, int i, unsigned long int j)
{
	if (s[i] == s[j])
	{
		if (j == (strlen(s) / 2))
			return (1);
		else
			return (test_palindrome(s, i + 1, j - 1));
	}
	else
		return (0);
}
