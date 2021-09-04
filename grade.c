#include<stdio.h>
int main()
{
    int marks;
    printf("Enter the marks\n ");
    scanf("%d",& marks);

    if (marks>75 & marks<100)
    {
        printf("destigntion\n");
    }
    else
        if (marks>=60 & marks<75)
        {
            printf("first devision");
        }
    else if (marks>=45 & marks<60)
        {
            printf("second devision");
        }
    else if (marks>=30 & marks<45)
        {
            printf("third devision");
        }
    else if(marks<30)
        {
            printf("fail");
        }
    return 0;

}