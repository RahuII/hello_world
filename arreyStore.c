#include <stdio.h>

int main()
{
    int n;
    printf("enter number of value you want to store\n");
    scanf("%d",&n);
    int marks[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter the value of %d element of the arrey\n",i);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("The value of %d element of the arrey is %d\n", i, marks[i]);
    }
    
    
    return 0;
}