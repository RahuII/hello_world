/* A program to find the largest number */
#include <stdio.h>
void main() {
	int a, b;
	printf("Enter two integer values : ");
	scanf("%d %d", &a, &b);// Read two values
	
	if(a > b)
	{
		printf("%d is larger than %d\n", a, b);
	}
	else
	{
		printf("%d is larger than %d\n", b, a); // Correct the code
	}	
}