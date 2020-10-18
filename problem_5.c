/*
Write a C program to swap two numbers.
*/

#include <stdio.h>
main()
{
    int firstDigit,secondDigit;

    printf("Enter first digit: ");
    scanf("%d",&firstDigit);

    printf("Enter second digit: ");
    scanf("%d",&secondDigit);

    printf("The number is : %d%d\n",firstDigit,secondDigit);

    printf("After swaping the number is : %d%d",secondDigit,firstDigit);

}
