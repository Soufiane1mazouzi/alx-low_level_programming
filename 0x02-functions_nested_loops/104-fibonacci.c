#include <stdio.h>
/**
 * main - program that finds and prints the first 98 Fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int f_num, num1 = 1, num2 = 2;
	int i;

	for (i = 1; i <= 98; i++)
	{
		if (i <= 2)
		{
			f_num = i;
		}
		else
		{
			f_num = num1 + num2;
			num1 = num2;
			num2 = f_num;
		}
		printf("%ld", f_num);
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
