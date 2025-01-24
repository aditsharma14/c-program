// wap to enter a six digit number and find the sum of first and last digit
#include <stdio.h>
int main()
{
    int a, b, c, d;
    // taken the input and stored in integer a
    printf("Enter the number:");
    scanf("%d", &a);
    // first digit
    b = a / 100000;
    // last digit
    c = a % 10;
    d = b + c;
    printf("%d", d);
    return 0;
}
