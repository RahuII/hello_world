#include<stdio.h>
int main()
{
    int num1, num2;
    float result;
    int choice;
    char ch;

    printf("enter first number\n");
    scanf("%d",& num1);
    printf("enter second number\n");
    scanf("%d",& num2);

    printf("Enter 1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division\n");
    scanf("%d",&choice);
    
    switch (choice)
    {
        case 1:
        scanf("%c",&ch);
        printf("%c",ch);
        result=num1+num2;
        break;

        case 2:
        result=num1-num2;
        break;

        case 3:
        result=num1*num2;
        break;

        case 4:
        result=num1/num2;
        break;

        default:
        printf("invalid input\n");
        break;
    }
 
    printf("Result=%f\n",result);
    return 0;
}