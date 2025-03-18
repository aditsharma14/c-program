#include <stdio.h>
int main()
{
    int arr[4] = {1, 2, 4, 5};
    arr[1] = 500;
    for (int i = 0; i < 4; i++)
    {
        printf("%d", arr[i]);
        printf("\n");
    }
}