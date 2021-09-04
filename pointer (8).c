#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguess = 1;
    srand(time(0));
    number = rand()%100+1;
    do
    {
        printf("guess between 1 to 100\n");
        scanf("%d",&guess);
        if (number<guess)
        {
            printf("Enter smaller number\n");
        }
        else if (number>guess)
        {
            printf("Enter greter number\n");
        }
        else
        {
            printf("you gussed it in %d attampts\n",nguess);
        }
        nguess ++;
        
    } while (guess!=number);
    
    return 0;
}