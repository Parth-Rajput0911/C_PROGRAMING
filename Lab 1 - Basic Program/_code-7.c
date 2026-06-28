//WAP TO FIND AREA OF TRIANGLE.
#include <stdio.h>
int main()
{
    float base, height, area;

    printf("Enter base of triangle: ");
    scanf("%f", &base);

    printf("Enter height of triangle: ");
    scanf("%f", &height);

    area = (base * height) / 2;

    printf("Area of Triangle = %.2f", area);

    return 0;
}