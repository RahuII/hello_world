#include <stdio.h>

int main()
{
    int a = 3;
    int* ptr = &a;
    printf("the adress of a pointer is %d\n",ptr);
    printf("the value of the pointer is %d\n",a);
    return 0;
}