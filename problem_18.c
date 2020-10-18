/*
Write a program that asks user an arithmetic operator(+,-,*,/) and two
operands and perform the corresponding calculation on the operands.
*/

#include <stdio.h>

int main()
{
    int num1, num2;
    char operator;
    printf("Input Operator (+,-,*,/): ");
    scanf("%c", &operator);

    printf("Enter first Number: ");
    scanf("%d", &num1);

    printf("Enter second Number: ");
    scanf("%d", &num2);

    switch (operator)
    {
    case '+':
        printf("\n%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("\n%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("\n%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("\n%d / %d = %d", num1, num2, num1 / num2);
        break;

    default:
        break;
    }
    return 0;
}


