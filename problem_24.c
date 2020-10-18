/*
Write a C program to check Palindrome number:
A palindrome number is a number such
that if we reverse it, it will not change.
*/

#include <stdio.h>
/**************
Function Prototype
***************/
int reverseNumber(int);


int main(){
    int n,reversed;
    printf("Enter a number to reverse: ");
    scanf("%d",&n);
    reversed = reverseNumber(n);

    if(reversed == n){
        printf("It is A palindrome number\n");
    }else{
        printf("\nReverse is: %d",reverseNumber(n));
    }
    getch();
}

/******************
Function Definition
*******************/
int reverseNumber(n){
    int r = 0,lastNumber;
    while(n != 0){
        lastNumber = n % 10;
        r = r * 10 + lastNumber;
        n /= 10;
    }
    return r;
}
















