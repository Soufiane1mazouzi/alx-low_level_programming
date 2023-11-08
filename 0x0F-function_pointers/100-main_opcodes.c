#include <stdio.h>
#include <stdlib.h>
/**
 * opcodes_print - funtion print opcodes of given function.
 * @f: function address.
 * @n: number of bytes
 */
void opcodes_print(char *f, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", f[i]);
		if (i != n - 1)
			printf(" ");
	}
	printf("\n");
}
/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: count.
 * @argv: vector.
 * Return: 0 or exit 1, 2.
 */
int main(int argc, char **argv)
{
	int n;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcodes_print((char *)&main, n);
	return (0);
}
