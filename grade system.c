// we are given the grade system of a university and have to make a program to find the grade
// secured by a student on the basis of marks the student gets.
// 90-100=>O
// 80-89=>E
// 70-79=>A
// 60-69=>B
// 50-59=>C
// 40-49=>D
//<40=>Fail
#include <stdio.h>
int main()
{
    int a;
    printf("enter the marks:");
    scanf("%d", &a);
    if (a >= 90 && a < 100)
    {
        printf("O");
    }
    if (a >= 80 && a < 89)
    {
        printf("E");
    }
    if (a >= 70 && a < 79)
    {
        printf("A");
    }
    if (a >= 60 && a < 69)
    {
        printf("B");
    }
    if (a >= 50 && a < 59)
    {
        printf("C");
    }
    if (a >= 40 && a < 49)
    {
        printf("D");
    }
    if (a >= 0 && a < 40)
    {
        printf("Fail");
    }
}