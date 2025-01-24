#include <stdio.h>
int main()
{
    int a;
    int b = 0;
    printf("enter the number of natural number:");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        b = b + i;
    }
    printf("%d", b);
    return 0;
}