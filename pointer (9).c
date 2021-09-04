#include <stdio.h>

int main()
{
    int amount, in, temp, n, i, intr;
    printf("enter your amount");
    scanf("%d",&amount);
    printf("enter your value in n terms");
    scanf("%d",&n);
    for (i = 0; i <= n; i++)
    {
        in = (amount *4)/100;
        amount = amount - 2100;
        intr = intr + in;
    }

    printf("your intrest is %d",intr);
    return 0;
}