#include<stdio.h>
void main() 
{
    int n, index=0;
    printf("enter your number\n");
    scanf("%d",&n);
    do
    {
        printf("%d,", index);
        index=index+1;
    } while (index<=n);
    

}