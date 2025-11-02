/*write a program to check whetever the given number is binary or not.*/
#include <stdio.h>

int main() {
    int num, temp, digit;
    int isBinary = 1;  // flag to check if it is binary

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0) {
        digit = temp % 10;
        if (digit != 0 && digit != 1) {
            isBinary = 0;  // not a binary digit
            break;
        }
        temp = temp / 10;
    }

    if (isBinary) {
        printf("%d is a binary number.\n", num);
    } else {
        printf("%d is not a binary number.\n", num);
    }

    return 0;
}
