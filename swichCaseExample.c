#include <stdio.h>
#include <math.h>

int main()
{
    int userInput = 0;
    unsigned long number = 0;
    while(1)
    {
        printf("Please enter a number between 1 and 6:");
        scanf("%d", &userInput);
        unsigned long incrementor = 0;
        switch(userInput)
        {
        case 1:
            incrementor += 5;
            break;
        case 2:
            incrementor += 9;
            break;
        case 3:
            incrementor += 18;
            break;
        case 4:
            incrementor += 34;
            break;
        case 5:
            incrementor += 59;
            break;
        case 6:
            incrementor += 95;
            break;
        default:
            printf("You have inputed incorrect number!\n");
        }
        number += incrementor;
        printf("Current number : %d \n", number);
    }
    return 0;
}
