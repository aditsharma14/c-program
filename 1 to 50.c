#include <stdio.h>
int main()
{
    int i = 2;
    do
    {
        printf("%d ", i);
        i += 2;
    } while (i <= 50);
    return 0;
}