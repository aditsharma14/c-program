#include <stdio.h>
int main()
{
    int a, b, rows;
    scanf("%d", &rows);
    for (a = 1; a <= rows; a++)
    {
        for (b = 1; b <= a; b++)
        {
            printf("%d   ", b);
        }
        printf("\n");
    }
    return 0;
}