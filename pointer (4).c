#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, *ptr, sum = 0;
    printf("entre total number of elements in your arrey\n");
    scanf("%d",&n);
    ptr=(int*) calloc(n,sizeof(int));
    for ( i = 1; i <= n; i++)
    {
        printf("enter element no %d\n",i);
        scanf("%d",ptr+i);
        sum = sum +*(ptr+i);
    }
    
    printf("the sum of %d nos. are %d\n",n, sum);
    free(ptr);
    
}