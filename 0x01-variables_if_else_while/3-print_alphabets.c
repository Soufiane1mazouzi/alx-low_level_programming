#include <stdio.h>
/**
 * main - alphabet in lowercase and uppercase
 *
 * Description: prints alphabet in lowercas
 * and uppercase using putchar
 *
 * Return: 0
 */
int main(void)
{
	int i;
	char UPPER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char lower[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; lower[i] != '\0'; i++)
	{
		putchar(lower[i]);
	}
	for (i = 0; UPPER[i] != '\0'; i++)
	{
		putchar(UPPER[i]);
	}
	putchar('\n');
	return (0);
}
