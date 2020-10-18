/*
Write a C program to find a list of prime numbers.
*/

#include <stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the value of prime you want: ");
    scanf("%d",&n);

    for(i = 2; i <= n; i++)
    {
        int c = 0;
        for(j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                c++;
            }
        }
        if(c == 2)
        {
            printf("%d ",i);
        }
    }
}













