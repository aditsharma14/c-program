#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter the number for which you want the multiplication table: ");
    scanf("%d", &num);

    do
    {
        printf("%d x %d = %d\n", num, i, num * i);
        i++;
    } while (i <= 10);

    return 0;
}