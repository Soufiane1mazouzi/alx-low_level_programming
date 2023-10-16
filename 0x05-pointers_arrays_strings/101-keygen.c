#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates a random valid password for 101-crackme.
 *
 * Return: 0 on success.
 */
int main(void)
{
    char password[65]; // 64 characters + '\0'
    int i, sum, last;

    srand(time(NULL));

    for (i = 0, sum = 0; sum < 2772 - 122;)
    {
        password[i] = (rand() % 94) + 33;
        sum += password[i++];
    }

    last = 2772 - sum;
    password[i++] = last;
    password[i] = '\0';

    printf("%s", password);

    return (0);
}
