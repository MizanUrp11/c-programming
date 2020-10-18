/*
Write a C program to check leap year.
*/

#include <stdio.h>
main()
{
    int year,leafYear;

    printf("Enter Year: ");
    scanf("%d",&year);
    leafYear = year % 4;
    if(leafYear)
    {
        printf("%d is not Leap Year\n",year);
    }
    else
    {
        printf("%d is Leap Year\n",year);
    }
}
