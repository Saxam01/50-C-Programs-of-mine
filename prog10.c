/*write a program to find area of triangle*/
#include<stdio.h>

int main()
{
    float base, height, area;
    printf("Enter base of triangle:");
    scanf("%f",&base);
    printf("Enter height of triangle:");
    scanf("%f",&height);
    area = 0.5 * base * height;
    printf("Area of triengle is: %.2f\n", area);
    return 0;
    
}
