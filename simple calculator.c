#include <stdio.h>
int main()
{
    int a;
    int b, c;
    printf("enter the number");
    scanf("%d", &a);
    printf("enter the number involved in the operation");
    scanf("%d", &b);
    printf("enter the number involved in the operation");
    scanf("%d", &c);
    switch (a)
    {
    case 1:
        printf("%d", b + c);
        break;
    case 2:
        printf("%d", b - c);
        break;
    case 3:
        printf("%d", c * b);
        break;
    case 4:
        printf("%d", b / c);
        break;
    }
    return 0;
}