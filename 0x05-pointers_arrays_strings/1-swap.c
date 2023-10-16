#include "main.h"
/**
 * swap_int - function that swaps the values of two integers.
 * @a: integer
 * @b: integer
 */
void swap_int(int *a, int *b)
{
	int p = *a;

	*a = *b;
	*b = p;
}
