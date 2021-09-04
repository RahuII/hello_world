#include <stdio.h>
void main()
{
    int n, i = 1;
    printf("Enter your value you want table:\n");
    scanf("%d",&n);
    do
    {
        printf("%d,", n*i);
        i = i+1;
    } while (i<=10);
    
}