#include <stdio.h>
int main()
{
    int a;
    printf("enter the number:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("the number is even");
    }
    if (a % 2 != 0)
    {
        printf("the number is odd");
    }
}