#include <stdio.h>
int main()
{
    int i = 1, num, sum = 0;
    do
    {
        scanf("%d", &num);
        sum += num;
        i++;
    } while (i <= 10);
    printf("Sum = %d, Average = %.2f\n", sum, sum / 10.0);
    return 0;
}