#include <stdio.h>
#include <math.h>

int evenOdd(int inputNum), multipleBy3(int inputNum), multipleBy5(int inputNum), multipleBy19(int inputNum);
double divisionBy10(int inputNum), divisionBy17(int inputNum);
int main()
{
    int inputNumbers[10];
    int i = 0;
    printf("Please enter 10 numbers.\n");
    scanf("%d,%d,%d,%d,%d,%d,%d,%d,%d,%d", &inputNumbers[0], &inputNumbers[1], &inputNumbers[2], &inputNumbers[3], &inputNumbers[4], &inputNumbers[5], &inputNumbers[6], &inputNumbers[7], &inputNumbers[8], &inputNumbers[9] );
    /*for(i = 0; i < 10; i++)
    {
        printf("Please enter number %d:", i + 1);
        scanf("%d", &inputNumbers[i]);
        //printf("====%d", inputNumbers[i]);
    }*/
    for(i = 0; i < 10; i++)
    {
        printf("%d - ", inputNumbers[i]);
        if(evenOdd(inputNumbers[i]))
        {
            printf("even, ");
        }
        else
        {
            printf("odd, ");
        }

        if(multipleBy3(inputNumbers[i]))
        {
            printf("yes, ");
        }
        else
        {
            printf("no, ");
        }

        if(multipleBy5(inputNumbers[i]))
        {
            printf("yes, ");
        }
        else
        {
            printf("no, ");
        }

        if(multipleBy19(inputNumbers[i]))
        {
            printf("yes, ");
        }
        else
        {
            printf("no, ");
        }
        printf("%f, %f \n", divisionBy10(inputNumbers[i]), divisionBy17(inputNumbers[i]));
    }
}

int evenOdd(int inputNum)
{
    int result = inputNum % 2;
    if(result == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int multipleBy3(int inputNum)
{
    int result = inputNum % 3;
    if(result == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int multipleBy5(int inputNum)
{
    int result = inputNum % 5;
    if(result == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int multipleBy19(int inputNum)
{
    int result = inputNum % 19;
    if(result == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

double divisionBy10(int inputNum)
{
    double result = inputNum / 10.0;
    //printf("%f test", result);
    return result;
}


double divisionBy17(int inputNum)
{
    double result = inputNum / 17.0;
    //printf("%f test", result);
    return result;
}
