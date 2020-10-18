/*
Write a C program to calculate
factorial of a number.
*/

#include <stdio.h>
main()
{
    int numberInput,i,result;


    printf("C program to calculate factorial of a number\n");
    printf("Enter a Number: ");
    scanf("%d",&numberInput);

    result = 1;
    for(i = 1; numberInput >= i; i++){
       result =  result * i;
    }
    printf("Factorial of %d is: %d\n",numberInput,result);
}
