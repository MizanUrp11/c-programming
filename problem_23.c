/*
Write C Program to reverse a number.
*/
#include <stdio.h>

/**************
Function prototype
***************/
int reverseNumber(int);



int main()
{
    int number;
    printf("Enter a number to reverse: ");
    scanf("%d",&number);
    printf("\nReverse is: %d",reverseNumber(number));
}

/**************
Function definition
***************/
int reverseNumber(n)
{
    int r = 0,lastDigit;
    while(n !=0)
    {
        lastDigit = n % 10;
        r = r * 10 + lastDigit;
        n /= 10;
    }
    return r;
}

