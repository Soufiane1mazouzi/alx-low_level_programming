#include <stdio.h>

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
    int i = 0, j = 0, k = 0, carry = 0;
    
    while (n1[i] || n2[j] || carry)
    {
        int digit1 = (n1[i]) ? n1[i] - '0' : 0;
        int digit2 = (n2[j]) ? n2[j] - '0' : 0;
        
        int sum = digit1 + digit2 + carry;
        
        if (k < size_r - 1)
        {
            r[k] = (sum % 10) + '0';
            k++;
        }
        else
        {
            return 0; // Result cannot fit in r
        }
        
        carry = sum / 10;
        
        if (n1[i]) i++;
        if (n2[j]) j++;
    }
    
    r[k] = '\0';
    
    // Reverse the result string
    int len = k;
    for (int a = 0; a < len / 2; a++)
    {
        char temp = r[a];
        r[a] = r[len - 1 - a];
        r[len - 1 - a] = temp;
    }
    
    return r;
}

int main(void)
{
    char *n = "1234567892434574367823574575678477685785645685876876774586734734563456453743756756784458";
    char *m = "9034790663470697234682914569346259634958693246597324659762347956349265983465962349569346";
    char r[100];
    char r2[10];
    char r3[11];
    char *res;

    res = infinite_add(n, m, r, 100);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "1234567890";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    n = "999999999";
    m = "1";
    res = infinite_add(n, m, r2, 10);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    res = infinite_add(n, m, r3, 11);
    if (res == 0)
    {
        printf("Error\n");
    }
    else
    {
        printf("%s + %s = %s\n", n, m, res);
    }
    return 0;
}
