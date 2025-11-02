#include<stdio.h>

int main()
{
    int N;
    printf("Enter number in N");
    scanf("%d",&N);

    revesre:
    printf("%d",N);
    N--;
    if( N > 0)
    goto revesre;

    return 0;
    
}