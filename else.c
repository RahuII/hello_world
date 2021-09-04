#include<stdio.h>
int main()
{
    int age,after;
    printf("Enter your age\n");
    scanf("%d",&age);
    if (age>=18)
    {
        printf("you can apply for the driving licence\n");
    }
    else
    {
        after=(18-age);
        printf("you can apply after %d year",after);
    }
    return 0;
    
}