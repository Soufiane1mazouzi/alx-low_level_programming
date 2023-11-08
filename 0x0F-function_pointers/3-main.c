#include "3-calc.h"
#include "stdio.h"
#include "stdlib.h"
/**
 * main - program that performs simple operations.
 *
 * @argc: arg count.
 * @argv: arg vector.
 *
 * Return: op result.
 */
int main(int argc, char **argv)
{
	int (*opt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	opt = get_op_func(argv[2]);
	if (opt == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", opt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
