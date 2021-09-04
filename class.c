#include<stdio.h>
void main()
{
	int n, i, a[10];
    
	printf("Enter size of the array : ");
	scanf("%d",&n);
	printf("Enter array elements : ");
	for(i = 0; i < n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The given integer array elements : ");
	for(i = 0; i <n ; i++)
	{
		printf("%d ",a[i]);
	}
	
}