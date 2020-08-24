#include <stdio.h>
#include<conio.h>
void main()
{
    char c;
    printf("now put your charcter\n");
    scanf("%c",&c);
    if (c>='a' & c<='z')
    {

        printf("small later");
    }
    else if(c>='A' & c<='Z')
    {
        printf("capital latter");
    }
    else if(c>='0' & c<='9')
    {
        printf("digit");
    }
    else 
    {
        printf(" special charactor");
    }


}
    
    
   