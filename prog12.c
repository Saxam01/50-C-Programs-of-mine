/*write a program to compute Fahrenheit from centigrade.*/
#include<stdio.h>

int main()
{
    float celsius, fahrenheit;
    printf("Emter temperature in celsius: ");
    scanf("%f",&celsius);
    fahrenheit = (celsius *9/5) + 32;
    printf("Tempreture in fahrenheit is: %.2f\n",fahrenheit);
    return 0;
    
}