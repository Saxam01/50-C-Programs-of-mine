/*write a program to display only odd numbers up to inputed number using goto statement*/
#include<stdio.h>

int main()
{
    int N,i = 1;
    printf("Enter number into N: \n");
    scanf("%d",&N);

    start:
    if(i <= N)
    {
       printf("%d\n",i);
        i = i + 2;
        goto start; 
    }
       
    return 0;

    
     
}