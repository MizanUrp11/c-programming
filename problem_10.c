/*
Write a C program to solve the quadratic equation.
*/

#include <stdio.h>
main()
{
    float a,b,c,x,resultA,resultB,temp,rtemp,temp2;
    printf("C program to solve the quadratic equation.\n");
    printf("Enter Value of a: ");
    scanf("%f",&a);

    printf("Enter Value of b: ");
    scanf("%f",&b);

    printf("Enter Value of c: ");
    scanf("%f",&c);


    temp2 = pow(b,2) - (4 * a * c);

    if(temp2 < 0){
        printf("Root calculation is not possible for negative values");
    }else{
        temp = sqrt(temp2);
        rtemp = -1 * temp;
        resultA = (-1 * b + temp) / 2 / a;
        resultB = (-1 * b + rtemp) / 2 / a;
        printf("Result is %.2f or %.2f",resultA,resultB);
    }
}
