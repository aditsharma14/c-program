#include <stdio.h>
int main()
{
    int a;
    int d;
    int b, c = 0;
    scanf("%d", &a);
    d = a;
    do
    {
        b = a % 10;
        a = a / 10;
        c = c + b * b * b;
    } while (a > 0);
    if (c == d)
    {
        printf("armstrong");
    }
    else
    {
        printf("not armstrong");
    }
    return 0;
}