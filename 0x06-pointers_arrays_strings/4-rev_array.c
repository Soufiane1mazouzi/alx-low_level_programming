#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array of integers.
 * @n: number of elements.
 */
void reverse_array(int *a, int n)
{
	int i, r;

	for (i = 0; i < n; i++)
	{
		r = a[i];
		a[i] = a[n - 1];
		a[n - 1] = r;
		n--;
	}
}
