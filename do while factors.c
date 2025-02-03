#include <stdio.h>
int main()
{
    int num, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    } while (i <= num);
    return 0;
}