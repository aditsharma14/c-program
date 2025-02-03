#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    do
    {
        printf("%d", a);
        printf("\n");
        a = a - 1;
    } while (a > 0);
}