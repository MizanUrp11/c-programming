#include <stdio.h>
/*
34. Write a C program to insert an element into an array.
*/

int main(){
    int i,x,pos,n,arr[100];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    //n = 10;

    printf("Enter position: ");
    scanf("%d",&pos);
    //pos = 5;

    printf("Enter value: ");
    scanf("%d",&x);
    //x = 50;

    for(i = 0; i < 10; i++){
        arr[i] = i + 1;
        printf("%d ",arr[i]);
    }
    printf("\n");

    n++;
    for(i = n; i >=pos; i--){
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;

    for(i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
}
