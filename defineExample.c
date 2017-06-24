#include <stdio.h>
#include <math.h>

#define NOT_DIVIDABLE_3 -1
#define NOT_DIVIDABLE_5 -2
#define NOT_DIVIDABLE_8 -3
#define SUCCESS 0

int main()
{
    int userInput = 0;
    scanf("%d", &userInput);
    if(userInput % 3 != 0) return NOT_DIVIDABLE_3;
    if(userInput % 5 != 0) return NOT_DIVIDABLE_5;
    if(userInput % 8 != 0) return NOT_DIVIDABLE_8;
    return SUCCESS;
}
