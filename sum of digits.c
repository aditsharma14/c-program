#include <stdio.h>
int main()
{
    int a;
    int b, c = 0;
    printf("enter the number:");
    scanf("%d", &a);
    do
    {
        b = a % 10;
        a = a / 10;
        c = c + b;
    } while (a > 0);
    printf("%d", c);
}