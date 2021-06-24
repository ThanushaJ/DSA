#include <stdio.h>
int main()
{
    int A, B, C;
    printf("Enter the values of A,B,C");
    scanf("%d%d%d", &A, &B, &C);
    if (A > B)
    {
        if (A > C)
        {
            printf("A is the largest\n");
        }
        else
        {
            printf("C is the largest\n");
        }
    }
    else
    {
        if (B > C)
        {
            printf("B is the largest\n");
        }
        else
        {
            printf("C is the largest\n");
        }
    }
}