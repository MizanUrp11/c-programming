/*
Write a C program to convert a line of lowercase text to uppercase.
*/

#include <stdio.h>

int main()
{
    char a;

    printf("Enter an alphabet: ");
    scanf("%c", &a);
    printf("Your uppercase input is: %c\n", toupper(a));
    printf("Your lowercase input is: %c\n", tolower(a));
}
