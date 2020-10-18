/*
Write a C program to find the greatest
common divisor (GCD) and LCM
*/

#include <stdio.h>

/*********************
Function Prototypes
**********************/
int gcdTreeNumbers(int, int);

/*********************
Global Variables
**********************/
int n1, n2, i, largest, gcd, lcm;

main()
{
    printf("Enter Three Integers: \n");
    scanf("%d %d", &n1, &n2);
    gcd = gcdTreeNumbers(n1, n2);
    lcm = n1 * n2 / gcd;

    printf("GCD of %d, %d is: %d\n", n1, n2, gcd);
    printf("LCM of %d, %d is: %d\n", n1, n2, lcm);
}

/*********************
Function Definition
**********************/

int gcdTreeNumbers(int number1, int number2)
{
    for (i = 1; i <= number1 && i <= number2; i++)
    {
        if (number1 % i == 0 && number2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
