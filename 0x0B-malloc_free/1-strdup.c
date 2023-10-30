#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 * @str: string
 * Return: NULL or pointer
 */
char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;

	if (str == NULL)
		return (NULL);
	size = (strlen(str) + 1) * sizeof(char);
	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < strlen(str); i++)
		ptr[i] = str[i];
	return (ptr);
}
