#include <stdio.h>
int main()
{
    int a;
    int b, c = 0;
    scanf("%d", &a);
    do
    {
        b = a % 10;
        a = a / 10;
        c = c * 10 + b;
    } while (a > 0);
    printf("%d", c);
    return 0;
}