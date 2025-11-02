/*Write a program to print "sanjay surati" five times (use goto statement)*/
#include<stdio.h>

int main()
{
    int count = 1;

    start:
        printf("sanjay surati\n");
        count++;
        if(count <=5)
            goto start;

        return 0;

}