/*
Write a C program to find the minimum or
smallest element in array.
*/

#include <stdio.h>
int main(){
    int num;
    float myArray[100];

    printf("Enter the number of elements: ");
    scanf("%d",&num);

    for(int i = 0; i < num; i++){
        printf("Enter Number %d: ", i + 1);
        scanf("%f",&myArray[i]);
    }
    for(int i = 0; i < num; i++){
        if(myArray[0] > myArray[i]){
            myArray[0] = myArray[i];
        }
    }
    printf("The smallest Number is %.2f", myArray[0]);
}
