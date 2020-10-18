/*
Write a C program to find the
maximum or highest element in array.
*/

#include <stdio.h>
int main(){
    int num;
    float numberArray[100];
    printf("Enter the number of elements (1-100): ");
    scanf("%d",&num);

    for(int i = 0; i < num; i++){
        printf("Enter Number %d: ", i + 1);
        scanf("%f",&numberArray[i]);
    }
    for(int i = 0; i < num; i++){
        if(numberArray[i] > numberArray[0]){
            numberArray[0] = numberArray[i];
        }
    }
    printf("Largest number is %.2f",numberArray[0]);
}
