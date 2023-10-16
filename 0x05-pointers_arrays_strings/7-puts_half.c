#include "main.h"
#include <stdio.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line.
 * @str: The string to print the second half of.
 */
void puts_half(char *str)
{
    int length = 0;
    int i;
    int start;

    // Calculate the length of the string
    while (str[length] != '\0')
        length++;

    // Calculate the starting index for the second half
    start = (length + 1) / 2;

    // Print the second half of the string
    for (i = start; i < length; i++)
        _putchar(str[i]);

    _putchar('\n');
}
