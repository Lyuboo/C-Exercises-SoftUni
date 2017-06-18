#include <stdio.h>
#include <math.h>

int main()
{
    double radius = 0;
    double circumference = 0, surfaceArea = 0, volume = 0;
    printf("Please enter the radius of the sphere \n Radius = ");
    scanf("%lf", &radius);
    circumference = 2 * M_PI * radius;
    surfaceArea = 4 * M_PI * radius * radius;
    volume = (4 * M_PI * radius * radius * radius) / 3;
    printf("Circumference = %lf\n Surface Area = %lf\n Volume = %lf", circumference, surfaceArea, volume);
    return 0;
}
