//WAP TO FIND AREA AND CIRCUMFERENCE BY TAKING INPUTS FROM USER.
#include<stdio.h>
int main()
{
    float r,area,cir;
    printf("Enter the Radius:");
    scanf("%f", &r);
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("The area of circle is:%f",area);
    printf("The circumfrance of circle is:%f",cir)
    return 0;
    
}