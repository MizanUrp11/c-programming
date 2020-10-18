/*
Write a C program to find the largest of 3 numbers
*/

#include <stdio.h>
main()
{
    int number1,number2,number3;
    printf("This is C program to find the largest of 3 numbers\n");
    printf("Enter First Number: ");
    scanf("%d",&number1);
    printf("Enter Second Number: ");
    scanf("%d",&number2);
    printf("Enter third Number: ");
    scanf("%d",&number3);

    if(number1 > number2 && number1 > number3){
        printf("%d is largest one.\n",number1);
    }else if(number2 > number3){
        printf("%d is largest one.\n",number2);
    }else{
        printf("%d is largest one.\n",number3);
    }

}
