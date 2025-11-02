#include <stdio.h>

int main() {
    int num, digit, largest = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        digit = num % 10;       // get last digit
        if (digit > largest) {  // check if digit is greater than current largest
            largest = digit;
        }
        num = num / 10;         // remove last digit
    }

    printf("Largest digit is %d\n", largest);
    return 0;
}
