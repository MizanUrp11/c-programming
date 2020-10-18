/*
Write a C program C program to perform addition,
subtraction, multiplication and
division.
*/

#include <stdio.h>
main()
{
    int iOperator,firstNumber,secondNumber,result;
    printf("1\t For Addition\n");
    printf("2\t For subtraction\n");
    printf("3\t For multiplication\n");
    printf("4\t For division\n");

    scanf("%d",&iOperator);
    printf("Enter First Number: ");
    scanf("%d",&firstNumber);
    printf("Enter Second Number: ");
    scanf("%d",&secondNumber);

    if(iOperator == 1){
        result = firstNumber + secondNumber;
        printf("%d + %d = %d",firstNumber,secondNumber,result);
    }
    if(iOperator == 2){
        result = firstNumber - secondNumber;
        printf("%d - %d = %d",firstNumber,secondNumber,result);
    }
    if(iOperator == 3){
        result = firstNumber * secondNumber;
        printf("%d * %d = %d",firstNumber,secondNumber,result);
    }
    if(iOperator == 4){
        result = firstNumber / secondNumber;
        printf("%d / %d = %d",firstNumber,secondNumber,result);
    }
}

