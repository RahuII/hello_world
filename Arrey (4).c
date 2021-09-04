#include <stdio.h>
void printArrey(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("the value of element %d is %d\n", i + 1, *(ptr + i));
    }
}
int main()
{
    int arr[] = {1, 44, 5, 33, 23, 454, 32};
    printArrey(arr, 7);
    return 0;
}