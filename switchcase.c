#include<stdio.h>
int main()
{
    int num, ch;
	printf("1. Lowercase to Uppercase\n");
	printf("2. Uppercase to lowercase\n");
	scanf("%d",&num);

    switch (num)
    {
case 1:
		printf("Enter your lowercase character : ");
		scanf("%c",&ch);
		ch = ch - 32;
		printf("Uppercase character : %c",ch);
		break;
    
case 2:
        printf("Enter a character in uppercase : ");
		scanf("%c",&ch);
		ch=ch+32;
		printf("character in lowercase = %c",ch);
		break;

    default:
        printf(" invalid input\n");
        break;
    }
    
}