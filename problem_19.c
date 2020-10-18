/*
Write a C program to find the average of maximum of N positive numbers entered by
user. But if the input is negative, display the average (excluding the average of negative
input) and end the program.
*/

#include <stdio.h>

int main()
{
    int num, i, inputs, sum, average, counter;
    printf("Enter the number of elements ");
    scanf("%d", &num);

    sum = 0;
    counter = 0;

    for (i = 0; i < num; i++)
    {
        printf("Enter next number: ");
        scanf("%d", &inputs);
        if(inputs < 0){
            continue;
        }else{
            sum += inputs;
            counter++;
        }
    }
    average = sum / counter;
    printf("The total Sum is: %d\n", sum);
    printf("The total Average is: %d\n", average);

    return 0;
}


