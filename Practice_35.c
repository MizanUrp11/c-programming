#include <stdio.h>
/*
35. Write a C program to delete an element from an array.
*/

int main(){
    int arr[100];
    int i,pos,n;

    printf("Enter the number of elements: ");
    scanf("%d",&n);
    //n = 10;

    for(i = 0; i < n; i++){
        arr[i] = i + 1;
        printf("%d ",arr[i]);
    }
    printf("\n");

    printf("Enter the position where to delete: ");
    scanf("%d",&pos);
    //pos = 5;

    for(i = pos; i <= n; i++){
        arr[i - 1] = arr[i];
    }

    //Result array
    printf("Result array is: \n");
    for(i = 0; i < n-1; i++){
        printf("%d ",arr[i]);
    }
}
