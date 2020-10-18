#include <stdio.h>
/*
33. Write a C program to reverse an array.
*/

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int arrSize = sizeof arr / sizeof *arr;

    for(int i = arrSize - 1; i >= 0; i--){
        printf("%d ",arr[i]);
    }


}
