/*Write a program to read three numbers from keyboard and find out maximum out of these three number*/
#include<stdio.h>

int main()
{
    int a, b, c, max;
    printf("Enter value in a\n");
    scanf("%d",&a);
    printf("Enter value in b\n");
    scanf("%d",&b);
    printf("Enter value in c\n");
    scanf("%d",&c);

    if( a > b)
    {
        if(a > c)
            max = a;
        else
            max = c;
    }
    else
    {
            if( b > c)
                max = b;
            else
                max = c;

    }

    printf("Maximum value is %d\n",max);
    return 0;
}
    
    
