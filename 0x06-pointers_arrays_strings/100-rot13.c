#include "main.h"

/**
 * rot13 - Encode a string using ROT13
 * @s: The input string to be encoded
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
    char *ptr = s;
    int i;
    char normal[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

    for (i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        int j = 0;
        int found = 0;

        while (normal[j] != '\0')
        {
            if (c == normal[j])
            {
                *ptr = rot13[j];
                found = 1;
                break;
            }
            j++;
        }

        if (found == 0)
        {
            *ptr = c;
        }
        ptr++;
    }

    return s;
}
