/*
Write a C program to calculate
factorial of a number.
*/

#include <stdio.h>
main()
{
    int n,i;
    float number[10],sum,average;
    sum = 0.00;

    printf("Enter the Number of elements for average: ");
    scanf("%d",&n);

    while(n > 10 || n < 0){
        printf("Please enter the Number between 1-10: ");
        scanf("%d",&n);
    }

    for(i = 0; i < n; i++){
        printf("Enter the number %d ",i + 1);
        scanf("%f",&number[i]);
        sum += number[i];
    }

    average = sum / n;
    printf("The average is = %.2f",average);
}
