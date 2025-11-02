/*write a program to find area of rectengle*/
#include<stdio.h>
int main()
{
    float length, width, area;
    printf("Enter length of rectengle:");
    scanf("%f",&length);
    printf("Enter width of rectengle:");
    scanf("%f",&width);
    area = length * width;
    printf("Area of rectengle is: %.2f\n",area);
    return 0;
    
}