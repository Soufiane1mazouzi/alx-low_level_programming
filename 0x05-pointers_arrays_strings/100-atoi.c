#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 * Return: The integer value, or 0 if no valid integer is found.
 */
int _atoi(char *s)
{
	int sign = 1; /* Initialize sign to positive */
	int result = 0;
	int i = 0;

	/* Handle leading spaces and signs */
	while (s[i] == ' ' || s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
		{
			sign *= -1; /* Handle negative sign */
		}
		i++;
	}

	/* Iterate through the string to convert to an integer */
	while (s[i] >= '0' && s[i] <= '9')
	{
		/* Check for integer overflow */
		if (result > (INT_MAX - (s[i] - '0')) / 10)
		{
			if (sign == 1)
			{
				return INT_MAX;
			}
			else
			{
				return INT_MIN;
			}
		}
		result = result * 10 + (s[i] - '0');
		i++;
	}

	/* Apply the sign */
	return result * sign;
}
