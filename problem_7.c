/*
Write a c program C program to check whether
input alphabet is a vowel or not.
*/

#include <stdio.h>
main(){
    char iAlphabet;
    printf("Enter a Alphabet: ");
    scanf("%c",&iAlphabet);

    if(iAlphabet == 'a' || iAlphabet == 'e' || iAlphabet == 'i' || iAlphabet == 'o' || iAlphabet == 'u' ){
        printf("Alphabet is Vowel\n");
    }else if(iAlphabet == 'A' || iAlphabet == 'E' || iAlphabet == 'I' || iAlphabet == 'O' || iAlphabet == 'U' ){

        printf("Alphabet is Vowel\n");
    }else{
        printf("Alphabet is Consonant.");
    }

}
