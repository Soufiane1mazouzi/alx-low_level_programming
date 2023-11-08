#include "function_pointers.h"
/**
 * int_index - function that searches for an integer.
 * @array: given array.
 * @size: size of array.
 * @cmp: pointer to function used to compare.
 * Return: -1 or index
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
		}
	}
	return (-1);
}
