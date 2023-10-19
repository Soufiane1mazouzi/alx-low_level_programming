#include <stdio.h>

int main(void)
{
 int n;
 int a[5];
 int *p;

 a[2] = 1024;
 p = &n;
 *p = 98; // Add this line
 a[2] -= 228;
 printf("a[2] = %d\n", a[2]);
 return (0);
}
