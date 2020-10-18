#include <stdio.h>
#include <stdlib.h>
//41. Write a C program to print length of string.

int main()

{
    char str[20];
    printf("Enter String: ");
    gets(str);
    int arrSize = strlen(str);

    printf("Length of string is: %d",arrSize);


    return 0;
}
