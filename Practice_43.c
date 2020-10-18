#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//43. Write a C program to copy a string.

int main()

{
    char str[100],copied[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(copied,str);
    printf("Copy is: %s",copied);

    return 0;
}
