#include <stdio.h>
int main()
{
    int num, fact = 1, i = 1;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        fact *= i;
        i++;
    } while (i <= num);
    printf("Factorial of %d = %d\n", num, fact);
    return 0;
}