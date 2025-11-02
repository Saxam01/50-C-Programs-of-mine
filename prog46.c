/*prog 71 */
#include<stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a number into n:-");
    scanf("%d",&n);

    for(i = 1; i < n; i++)
    {
        sum = sum + (i * i);
    
    }

    printf("sum = %d",sum);
    return 0;
}
