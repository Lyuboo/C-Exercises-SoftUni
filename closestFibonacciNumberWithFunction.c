#include <stdio.h>
#include <math.h>

int fibonacci(int userNumber);
int g_number = 0;

int main()
{
    int userInput = 0, fibonacciNumber = 0;
    printf("Please enter a number:");
    scanf("%d", &userInput);
    if(userInput < 0)
    {
        printf("1, 1\n");
    }
    else if(userInput == 0)
    {
        printf("1, 1\n");
    }
    else
    {
        printf("%d, ", fibonacci(userInput));
        printf("%d\n", g_number);
    }
    return 0;
}

int fibonacci(int userNumber)
{
    int fibonacciA = 1, fibonacciB = 1, fibonacciC = 0;
    for(g_number = 3; fibonacciC <= userNumber; g_number++)
        {
            fibonacciC = fibonacciA + fibonacciB;
            fibonacciA = fibonacciB;
            fibonacciB = fibonacciC;
        }
        if((fibonacciC - userNumber) < (userNumber - fibonacciA))
        {
            g_number--;
            //printf("%d test \n", number);
            return fibonacciC;
        }
        else if((fibonacciC - userNumber) > (userNumber - fibonacciA))
        {
            g_number = g_number - 2;
            //printf("%d test \n", number);
            return fibonacciA;
        }
        else if((fibonacciC - userNumber) == (userNumber - fibonacciA))
        {
            g_number = g_number - 2;
            //printf("%d test \n", number);
            return fibonacciA;
        }
}
