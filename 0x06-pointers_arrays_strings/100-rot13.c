#include "main.h"

int _putchar(char c)
{
    return write(1, &c, 1);
}

char *rot13(char *s)
{
    char *ptr = s;
    int i;

    for (i = 0; s[i] != '\0'; i++)
    {
        char c = s[i];
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        {
            char base = (c >= 'a' && c <= 'z') ? 'a' : 'A';
            *ptr = (c - base + 13) % 26 + base;
        }
        else
        {
            *ptr = c;
        }
        ptr++;
    }

    return s;
}
