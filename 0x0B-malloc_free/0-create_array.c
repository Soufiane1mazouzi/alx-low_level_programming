#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of chars, and initializes
 * it with a specific char.
 * @size: size of memory
 * @c: specific char
 * Return: null of pointer
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
