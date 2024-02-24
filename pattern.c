#include <stdio.h>
int main()
{
    int N, n = 0, i, j, r;
    scanf("%d", &N);
    for (r = 1; r <= N; r++)
    {
        for (i = 1; i <= r; i++)
        {
            n++;
            printf("%d", n);
        }
        for (i = 1; i < r; i++)
        {
            n--;
            printf("%d", n);
        }
        printf("\n");
    }
}
