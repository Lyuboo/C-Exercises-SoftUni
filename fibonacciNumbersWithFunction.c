#include <stdio.h>
#include <math.h>

int fibonacci(int inputNum);

int main()
{
    int userInput = 0, fibonacciNumber = 0;
    printf("Please enter a Fibonacci member:");
    scanf("%d", &userInput);
    if(userInput < 0)
    {
        printf("Error: Input positive number\n");
    }
    else if(userInput == 0)
    {
        printf("Error: Input larger number than 0\n");
    }
    else
    {
        printf("%d\n", fibonacci(userInput));
    }
}

int fibonacci(int inputNum)
{
    if(inputNum < 3)
    {
        return 1;
    }
    else
    {
        return fibonacci(inputNum - 2) + fibonacci(inputNum - 1);
    }
}
