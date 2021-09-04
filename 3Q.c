#include <stdio.h>
void main()
{
	int number, result, n1, n2;
	printf("enter the first number : ");
		scanf("%d", &n1);
	printf("enter the second number : ");
		scanf("%d", &n2);
	printf("enter the number between(1-4) 1. sum, 2. sub, 3. multiplecation, 4. division\n");
		scanf("%d", &number);
	switch (number)
	{
	case 1:
		printf("%d + %d = %d",n1, n2, n1 + n2);
		break;
	case 2:
		printf("%d - %d = %d",n1, n2, n1 - n2);
		break;
	case 3:
		printf("%d * %d = %d",n1, n2, n1 * n2);
		break;
	case 4:
		printf("%d / %d = %d",n1, n2, n1 / n2);
		break;
	
	default:
		printf("input is wrong");
		break;
	}
}