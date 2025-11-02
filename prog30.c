/*write a program to display only even numbers up yo inputed numbers using goto statement.*/
#include<stdio.h>

int main()
{
    int N, i = 2;
    printf("Enter number into N: \n");
    scanf("%D",&N);

    start:
    if(i <= N)
    {
        printf("%d\n",i);
        i = i + 2;
        goto start;

        return 0;
    }
}