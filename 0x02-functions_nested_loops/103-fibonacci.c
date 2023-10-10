#include <stdio.h>
/**
 * main - program that finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence whose values do not exceed 4,000,000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int sum, num1, num2, f_num;

	num1 = 1;
	num2 = 2;
	sum = 2;
	while (f_num <= 4000000)
	{
		f_num = num1 + num2;
		num1 = num2;
		num2 = f_num;
		if (f_num % 2 == 0)
			sum += f_num;
	}
	printf("%ld\n", sum);
	return (0);
}
