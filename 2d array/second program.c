// program to store and print 12 values entered by the user in 2-D matrix
#include <stdio.h>
int main()
{
    float a[2][2], b[2][2], result[2][2];
    // taking input
    printf("enter elements for the first matrix\n");
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("enter a%d%d", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("enter b%d%d", i + 1, j + 1);
            scanf("%f", &b[i][j]);
        }
    }
    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            result[i][j] = a[i][j] + b[i][j];
        }
        printf("\nSum Of Matrix:");
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 2; ++j)
        {
            printf("%.1f\t", result[i][j]);

            if (j == 1)
                printf("\n");
        }
    }
    return 0;
}