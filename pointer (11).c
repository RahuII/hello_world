#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter your two value\n");
    scanf("%d%d",&a,&b);
    if (a>b)
    {
        printf("a is greter\n");
    }
    else if (b>a)
    {
        printf("b is greter\n");
    }
    else
    {
        printf("both are equal");
    }
    
    return 0;
}