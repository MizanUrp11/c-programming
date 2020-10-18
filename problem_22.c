/*
C program to find nCr and nPr: This code calculate
nCr which is n!/(r!*(n-r)!) and nPr =
n!/(n-r)!
*/
#include <stdio.h>

/**************
Function prototype
***************/
int subtractTwo(int,int);
int factorial(int);


int main()
{
    int n,r,option,ncr,npr;
    printf("\nCalculate NCR/NPR: ");
    printf("\nEnter value of n and r: ");
    scanf("%d %d",&n,&r);
    printf("\nChose option: \n");
    printf("1\tNCR\t\n");
    printf("2\tNPR\t\n");
    printf("\n(1/2): ");
    scanf("%d",&option);

    if(option == 1){
        ncr = factorial(n)/(factorial(r)*factorial(subtractTwo(n,r)));

        printf("NCR: %d",ncr);
    }else{
        npr = factorial(n)/factorial(subtractTwo(n,r));
        printf("NPR: %d",npr);
    }
}

/**************
Function definition
***************/
int subtractTwo(n,r){
    return n-r;
}

int factorial(n){
    int result = 1,i = 1;

    while(n >= i)    {
        result*=i;
        i++;
    }
    return result;
}
