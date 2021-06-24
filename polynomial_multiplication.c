//multiply two polynomials (ax+b) and (cx+d) = (ac)x^2+(ad+bc)x+bd
#include <stdio.h>
int main()
{
    int a, b, c, d;
    int c1, c2, c3; //co-efficients
    printf("enter a:");
    scanf("%d", &a);
    printf("enter b:");
    scanf("%d", &b);
    printf("enter c:");
    scanf("%d", &c);
    printf("enter d:");
    scanf("%d", &d);
    c1 = a * c;
    c2 = a * d + b * c;
    c3 = b * d;
    printf("The product of (%dx+%d) and (%dx+%d) is %dx^2+%dx+%d \n", a, b, c, d, c1, c2, c3);
}