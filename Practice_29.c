#include <stdio.h>
/*
29. Write a C program to find the maximum or highest element in array.
*/

int main(){
    float arr[] = {1,2,3,4.3,4.6,5,6,6.7};
    int arrSize = sizeof arr / sizeof *arr;
    for(int i = 0; i < arrSize; i++){
        if(arr[0] < arr[i]){
            arr[0] = arr[i];
        }
    }
    printf("Largest is: %.2f",arr[0]);
}
