#include <stdio.h>

int main()
{
    int i, marks[4];
    for (i = 0; i < 4; i++)
    {
        printf("enter your marks %d\n",i+1);
        scanf("%d",&marks[i]);
    }
    for (i = 0; i < 4; i++)
    {
        printf("your marks%d is %d\n",i+1, marks[i]);
    }
    return 0;
}