/*write a program to insert five numbers and print avarage value.*/
#include<stdio.h>

int main()
{
    int num, sum = 0, i;
    float avg;
    for(i = 1; i <= 5; i++)
    {
        printf("Enter number %d", i);
       scanf("%d", &num);
       sum = sum + num;

    }
    avg = sum / 5.0;
    printf("Avarage is: %.2f", avg);

    return 0;
    
}