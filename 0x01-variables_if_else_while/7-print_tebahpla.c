#include <stdio.h>
/**
 * main - print a string using putchar
 *
 * Description: print alphabets in reverse
 *
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
