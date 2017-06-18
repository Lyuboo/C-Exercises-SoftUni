#include <stdio.h>
#include <math.h>

int main()
{
    int number = 0, fibonacciA = 1, fibonacciB = 1, fibonacciC = 0, i = 0;
    printf("Please enter a Fibonacci number: ");
    scanf("%d", &number);
    if(number < 0)
    {
        printf("Error: Input positive number\n");
    }
    else if(number == 0)
    {
        printf("Error: Input larger number than 0\n");
    }
    else
    {
        for(i = 3; i <= number; i++)
        {
            fibonacciC = fibonacciA + fibonacciB;
            fibonacciA = fibonacciB;
            fibonacciB = fibonacciC;
        }
        printf("%d", fibonacciC);
    }
    return 0;
}
