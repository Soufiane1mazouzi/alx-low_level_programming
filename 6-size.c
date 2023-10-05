#include <stdio.h>
/**
 * main - prints the size of various data types
 *
 * Description: prints the size of data types
 * (char, int, long int, long long int, float)
 * Return: 0
 */
int main(void)
{
	char c;
	int d;
	long int ld;
	long long int lld;
	float f;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of an int: %lu byte(s)\n", sizeof(d));
	printf("Size of a long int: %lu byte(s)\n", sizeof(ld));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lld));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));
	return (0);
}
