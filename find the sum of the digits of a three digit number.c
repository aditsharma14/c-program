// find the sum of the digits of a three digit number
#include <stdio.h>
int main()
{
    int a, b, c = 0;
    printf("enter the number:");
    scanf("%d", &a);
    while (a > 0)
    {
        b = a % 10;
        c = c + b;
        a = a / 10;
    }
    printf("%d", c);
    return 0;
}