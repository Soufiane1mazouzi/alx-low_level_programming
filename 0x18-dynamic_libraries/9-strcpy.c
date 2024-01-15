#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src, including the
 * terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: string
 * @src: buffer
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int size = 0;
	int i = 0;

	while (src[i] != '\0')
	{
		size += 1;
		i++;
	}
	for (i = 0; i < size; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
