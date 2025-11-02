/*write a program to display sum of N number using goto statement*/
#include <stdio.h>

int main() {
    int n, sum = 0, i = 1;
    printf("Enter the value of N: ");
    scanf("%d", &n);

    start:
        if (i > n)
            goto end;
        sum += i;
        i++;
        goto start;

    end:
        printf("Sum of first %d numbers is: %d\n", n, sum);
        return 0;
}
