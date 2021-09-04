#include <stdio.h>
#include <conio.h>
int main()
{
    float kmToMile =  0.621371;   
    float inchesToFoot = 0.0833333;
    float  cmsToInches = 0.393701;
    float  poundToKgs = 0.453592;
    float inchesToMeters = 0.0254;
    float first, secound;
    char input;
    while (1)
    {
        printf("Enter the input charactor. q to quit\n 1.Km to miles\n 2.Inches to foots\n 3.Centimeters to inches\n 4.Pounds to kgs\n 5.Inches to meters\n");
        scanf("%c",&input);
        switch (input)
        {
        case 'q':
            printf("Quiting....");
            goto end;
            break;
        case '1':
            printf("Enter quantity in terms of first unit\n");
            scanf(" %f",&first);
            secound = first * kmToMile;
            printf("%f kilometer is eqal to %f Mile\n\n\n\n", first, secound);
            break;
        case '2':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            secound = first * inchesToFoot;
            printf("%f Inch is eqal to %f Foot\n", first, secound);
            break;
        case '3':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            secound = first * cmsToInches;
            printf("%f Centimeter is eqal to %f Inch\n", first, secound);
            break;
        case '4':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            secound = first * poundToKgs;
            printf("%f Pound is eqal to %f KG\n", first, secound);
            break;
        case '5':
            printf("Enter quantity in terms of first unit\n");
            scanf("%f",&first);
            secound = first * inchesToMeters;
            printf("%f Inch is eqal to %f Meter\n", first, secound);
            break;
        
        default:
            break;
        }
    }
    end:
    return 0;
}