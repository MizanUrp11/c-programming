/*
Write a C program to find the number of integers divisible by 5 between the given range
num1 and num2, where num1 < num2. Also find the sum of all these integer numbers
which are divisible by 5 and display the total.
*/

#include <stdio.h>

int main()
{
    int number1, number2, i, sum;
    printf("Please enter the range (space separated): ");
    scanf("%d %d", &number1, &number2);

    sum = 0;
    for (number1; number1 <= number2; number1++)
    {
        if (number1 % 5 == 0)
        {
            sum += number1;
            printf("Number is: %d\n", number1);
        }
    }
    printf("\nSum of Numbers: %d", sum);

    getch();
}
