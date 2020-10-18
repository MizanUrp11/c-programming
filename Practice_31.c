#include <stdio.h>
/*
31. Write a C program to find an item from an array by Linear search.
*/

int main()
{
    int arrSearch;
    int arr[] = {1,2,3,40,5,6};
    int arrSize = sizeof arr / sizeof *arr;

    printf("Enter the number you want to search: ");
    scanf("%d",&arrSearch);

    for(int i = 0; i < arrSize; i++){
            if(arr[i] == arrSearch){
                printf("Your search is in position %d and result is %d",i+1,arr[i]);
            }
    }
}

