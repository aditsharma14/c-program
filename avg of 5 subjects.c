#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g;
    printf("give the marks of first subject:");
    scanf("%d", &a);
    printf("give the marks of second subject:");
    scanf("%d", &b);
    printf("give the marks of third subject:");
    scanf("%d", &c);
    printf("give the marks of fourth subject:");
    scanf("%d", &d);
    printf("give the marks of fifth subject:");
    scanf("%d", &e);
    f = (a + b + c + d + e) / 5;
    g = (a + b + c + d + e) / 10;
    printf("the average marks are:%d\n", f);
    printf("percentage is:%d", g);
    return 0;
}