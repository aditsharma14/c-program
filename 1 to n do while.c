#include <stdio.h>
int main()
{
    int n, i = 1;
    printf("Enter n: ");
    scanf("%d", &n);
    do
    {
        printf("%d ", i);
        i++;
    } while (i <= n);
    return 0;
}