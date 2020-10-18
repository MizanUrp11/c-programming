#include <stdio.h>
/*
38. Write a C program to transpose a matrix.
*/
int main(){
    int a[100][100],b[100][100],trans[100][100],i,j,r,c;
    printf("Enter Number of Columns: ");
    scanf("%d",&c);
    printf("Enter Number of rows: ");
    scanf("%d",&r);

    printf("Enter the elements of First Matrix A: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("Enter Element a[%d%d]",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }



    for(j = 0; j < c; j++){
        for(i = 0; i < r; i++){
            trans[i][j] = a[j][i];
        }
    }

    printf("Matrix of A: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

    printf("Transpose matrix of A: \n");
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            printf("%d\t",trans[i][j]);
        }
        printf("\n");
    }

}
