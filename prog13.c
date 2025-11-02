/*write a program to calculate area of circle*/
#include<stdio.h>

int main()
{
    float radius, area;
    printf("Enter radius of circle: ");
    scanf("%f",&radius);
    area = 3.14 * radius * radius;
    printf("area of cicle is: %.2f\n",area);
    return 0;
    
}
