/*
Write a C program to check an integer
whether odd or even.
*/

#include <stdio.h>
int main()
{
    int number,result;

    printf("Enter the number for odd even check ");
    scanf("%d",&number);
    result = number % 2;
    if(result)
    {
        printf("The Number is odd");
    }
    else
    {
        printf("The Number is Even");
    }
}

