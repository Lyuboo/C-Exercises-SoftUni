#include <stdio.h>
#include <math.h>

int main()
{
    int number = 0, fibonacciInput = 0, fibonacciA = 1, fibonacciB = 1, fibonacciC = 0;
    printf("Please enter a Fibonacci number: ");
    scanf("%d", &fibonacciInput);
    if(fibonacciInput < 0)
    {
        printf("1, 1\n");
    }
    else if(fibonacciInput == 0)
    {
        printf("1, 1\n");
    }
    else
    {
        for(number = 3; fibonacciC <= fibonacciInput; number++)
        {
            fibonacciC = fibonacciA + fibonacciB;
            fibonacciA = fibonacciB;
            fibonacciB = fibonacciC;
        }
        if((fibonacciC - fibonacciInput) < (fibonacciInput - fibonacciA))
        {
            printf("%d, %d", fibonacciC, number - 1);
        }
        else if((fibonacciC - fibonacciInput) > (fibonacciInput - fibonacciA))
        {
            printf("%d, %d", fibonacciA, number - 2);
        }
        else if((fibonacciC - fibonacciInput) == (fibonacciInput - fibonacciA))
        {
            printf("%d, %d", fibonacciA, number - 2);
        }
    }
    return 0;
}
