#include <stdio.h>
#include <math.h>

int main()
{
    double triangleA = 0, triangleB = 0, triangleC = 0;
    double area = 0, halfPerimeter = 0;
    printf("Please enter the sides of the triangle:\n Side A = ");
    scanf("%lf", &triangleA);
    printf("\n Side B = ");
    scanf("%lf", &triangleB);
    printf("\n Side C = ");
    scanf("%lf", &triangleC);
    //Let's use the Heron's Formula;
    halfPerimeter = (triangleA + triangleB + triangleC) / 2;
    area = sqrt(halfPerimeter * (halfPerimeter - triangleA) * (halfPerimeter - triangleB) * (halfPerimeter - triangleC));
    printf("Area = %lf", area);
    return 0;
}
