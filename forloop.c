#include <stdio.h>
void main()
{
	int i, n, sum, sumq = 0;
	sum = 0;
	printf("Enter n value : ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++)
		sum = sum + 1;
	printf("Sum of %d natural numbers : %d\n", n, sum);

	for (i = 1; i <= n; i++)
		sumq = sumq + (i * i);
	printf("Sum of squares of %d natural numbers : %d\n", n, sumq);
}