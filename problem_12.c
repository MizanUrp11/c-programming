/*
Write a C program to find the sum
of odd and even numbers from 1 to N.
*/

#include <stdio.h>
main()
{
    int i,myNumber,sum_odd,sum_even;
    printf("Enter you desired Number: ");
    scanf("%d",&myNumber);

    sum_odd = 0;
    sum_even = 0;
    for( i = 0; i <= myNumber; i++ ){
        if( i % 2 ){
            sum_odd = sum_odd + i;
        }else{
            sum_even = sum_even + i;
        }
    }
    printf( "Result: \nSum of Odd = %d\nSum of Even = %d",sum_odd,sum_even );
}
