#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    // Find last digit
    lastDigit = num % 10;

    // Find first digit by dividing number until it's less than 10
    int temp = num;
    while (temp >= 10) {
        temp = temp / 10;
    }
    firstDigit = temp;

    // Calculate sum of first and
