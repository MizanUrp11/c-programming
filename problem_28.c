/*
Write a C program to find a list of prime numbers without recursion.
*/

#include <stdio.h>
int main()
{
    int upper_limit;
    printf("\nFibonacchi series.\n");
    printf("\nEnter the interation number: ");
    scanf("%d",&upper_limit);

    int x = -1;
    int y = 1;
    int z;
    for(int i = 0; i < upper_limit; i++)
    {
        z = x + y;
        printf("%d ",z);
        x = y;
        y = z;
    }
}













