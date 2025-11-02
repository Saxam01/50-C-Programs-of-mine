/*write a program to create a simple calculater with using switch case.*/
#include <stdio.h>

int main()
 {
    int num1, num2, result;
    char op;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);

    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %d + %d = %d\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %d - %d = %d\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %d * %d = %d\n", num1, num2, result);
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                printf("Cannot divide by zero.\n");
                return 1;
            }
            printf("Result: %d / %d = %d\n", num1, num2, result);
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
