/*write a program to display first natural numbers (using for, while, do while statement).*/
#include<stdio.h>

int main()
{
    int n, i;
    printf("Using do while statement\n");
    i = 1;
    if(n > 0)
    do{
        printf("%d", i);
        i++;

    }while(i <= 10);

    printf("\n");
    return 0;

}