#include <stdio.h>
int main()
{
    int a, b, rows;
    scanf("%d", &rows);
    for (a = rows; a >= 1; a--)
    {
        for (b = a; b >= 1; b--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}