#include<stdio.h>
void main()
{
	int n, i, a[10];
	printf("Enter size of the array : ");
	scanf("%d",&n);
	for(i = 0; i < n; i++)
	{
        printf("Enter array elements : ");
		scanf("%d",&a[i]);
	}
	printf("The given integer array elements : ");
	for(i = 0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
}