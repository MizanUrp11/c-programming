#include <stdio.h>
/*
36. Write a C program to add two matrices.
*/

int main(){
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;
    printf("Enter the number of rows: ");
    scanf("%d",&r);

    printf("Enter the number of cols: ");
    scanf("%d",&c);

    printf("Elements of first matrix: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter element a%d%d ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }

    printf("Elements of second matrix: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter element b%d%d ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }

    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("\nResult of Matrix A + Matrix B\n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("  %d",sum[i][j]);
        }
        printf("\n");
    }
}
