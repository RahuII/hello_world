#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("enter four values a b c d\n");
    scanf("%d%d%d%d", &a, &b, &c, &d);
    if (a > b && a > c && a > d)
    {
        printf("Max value : %d\n", a);
    }
    else if (b > c && b > d)
    {
        printf("Max value : %d\n", b);
    }
    else if (c > d)
    {
        printf("Max value : %d\n", c);
    }
    else
    {
        printf("max value : %d\n", d);
    }
    if (a < b && a < c && a < d)
    {
        printf("Min value : %d\n", a);
    }
    else if (b < c && b < d)
    {
        printf("Min value : %d\n", b);
    }
    else if (c < d)
    {
        printf("Min value : %d\n", c);
    }
    else
    {
        printf("min value : %d\n", d);
    }
}