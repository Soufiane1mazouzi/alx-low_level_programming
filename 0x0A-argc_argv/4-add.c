#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argv: vector
 * @argc: count
 * Return: 0 or 1
 */
int main(int argc, char **argv)
{
	int sum = 0;
	int i, j;

	if (argc < 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
