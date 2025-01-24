// 3 digit number and the sum of all digits
#include <stdio.h>
int main()
{
    int a, b = 0;
    printf("enter the number:");
    scanf("%d", &a);
    while (a > 0)
    {
        b = b + a % 10;
        a = a / 10;
    }
    printf("%d", b);
    return 0;
}