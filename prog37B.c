/*write a program to display first natural numbers (using for, while, do while statement).*/
#include<stdio.h>

int main()
{
    int i, n;
    printf("using while loop\n");
    i = 1;
    while(i <= 10)
    {
        printf("%d", i);
        i++;
    }
    printf("\n");
    return 0;
    
}