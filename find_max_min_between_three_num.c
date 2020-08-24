#include<stdio.h>
void main()
{
	int a, b, c;
	printf("Enter 3 numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			if(b<c)
			{
				printf("The max and min of three numbers are : %d %d\n",a,b);
			}
			else
			{
				printf("The max and min of three numbers are : %d %d\n",a,c);
			}
		}
		else 
		{
			printf("The max and min of three numbers are : %d %d\n",c,b);
		}
	}
	else if(b>c)
	{
		if(c<a)
		{
			printf("The max and min of three numbers are : %d %d\n",b,c);
		}
		else
		{
			printf("The max and min of three numbers are : %d %d\n",b,a);
		}
		
	}
	else
	{
		if(b<a)
		{
			printf("The max and min of three numbers are : %d %d\n",c,b);
		}
		else
		{
			printf("The max and min of three numbers are : %d %d\n",c,a);
		}
	}
}