#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//42. Write a C program to compare two strings.

int main()

{
    char str1[100],str2[100];
    printf("Enter first string: ");
    gets(str1);

    printf("Enter second string: ");
    gets(str2);

    if(strcmp(str1,str2) == 0){
        printf("%s and %s are Equal.",str1,str2);
    }else{
        printf("%s and %s are not Equal.",str1,str2);
    }

    return 0;
}
