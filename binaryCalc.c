#include <stdio.h>
#include <math.h>

unsigned long long toBinaryFunc (int inputNum);



int main()
{
    int userNum = 0;
    printf("Please give me a number: ");
    scanf("%d", &userNum);
    printf("%lld", toBinaryFunc(userNum));
    return 0;
}

unsigned long long toBinaryFunc( int inputNum)
{
    unsigned long long result = 0;
    int i = 1;
    while (inputNum != 0)
    {
        int remainder = inputNum % 2;
        inputNum /= 2;
        result += i * remainder;
        i *= 10;
    }
    return result;
}
