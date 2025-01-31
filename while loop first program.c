#include <stdio.h>
int main()
{
    int i = 1;
    while (i <= 5)
    {
        int j = 1;
        while (j <= 10)
        {
            printf("%d", j * i);
            printf("\n");

            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
// Here I have used while loop which will give the following output
// 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20

// 3
// 6
// 9
// 12
// 15
// 18
// 21
// 24
// 27
// 30

// 4
// 8
// 12
// 16
// 20
// 24
// 28
// 32
// 36
// 40

// 5
// 10
// 15
// 20
// 25
// 30
// 35
// 40
// 45
// 50