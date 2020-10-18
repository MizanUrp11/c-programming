/*
Write a C program to check whether a given integer is positive.
*/

#include <stdio.h>
main(){
    int iNumber;
    printf("Enter a Number: ");
    scanf("%d",&iNumber);

    if(iNumber > 0){
        printf("Number is Positive.\n");
    }else{
        printf("Number is Negative.\n");
    }

}
