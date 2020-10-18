/*
Write a C program to get two numbers
from keyboard and add them.
*/

#include <stdio.h>
main()
{
    int firstNumber,secondNumber;
    printf("Enter First Number ");
    scanf("%d",&firstNumber);
    printf("Enter Second Number ");
    scanf("%d",&secondNumber);
    printf("The addition is %d",firstNumber + secondNumber);
}

