#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//44. Write a C program to concatenate two strings.

int main()

{
    char str[100],str2[100],concat[1000];
    printf("Enter first string: ");
    gets(str);
    printf("Enter second string: ");
    gets(str2);

    printf("concateneted string is: %s",strcat(str,str2));
    return 0;
}
