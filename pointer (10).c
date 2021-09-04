#include <stdio.h>

int main()
{
    int income;
    printf("Enter your income\n");
    scanf("%d",&income);
    if (income>1000000)
    {
        printf("your tax is 30%%\n");
    }
    if (income>500000)
    {
        printf("your tax is 20%%");
    }
    
    if (income>250000)
    {
        printf("your tax is 5%%");
    }
    else
    {
        printf("your tax is null");
    }
    return 0;
}
