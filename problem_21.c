/*
Write a C program to find the product of N integers entered by user.
If user enters 0 skip it.
*/

#include <stdio.h>

int main()
{
    int number_of_elements,i,number_to_multiply,result;
    printf("Please enter Number of element: ");
    scanf("%d",&number_of_elements);

    i = 1;
    number_to_multiply = 1;
    result = 1;
    while(number_of_elements >= i)
    {
        printf("\nEnter Number %d: ",i);
        scanf("%d",&number_to_multiply);
        if(number_to_multiply == 0)
        {
            number_to_multiply = 1;
        }
        else
        {
            result *= number_to_multiply;
        }

        i++;
    }
    printf("\nResult is: %d",result);
}
