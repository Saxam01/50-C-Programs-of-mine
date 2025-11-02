/*write a program to make fibonacci series*/
# include<stdio.h>

int main()
{
    int n, i, A = 1, B =0, C;
    printf("enter a number into n:");
    scanf("%d",&n);
    for(i = 1; i <= n; i++)
{
    C = A + B;
    A = B;
    B = C;
    printf("%d" ,C);
} 
    return 0;
}