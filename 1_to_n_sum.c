#include<stdio.h>
void main()
{

    float n,ans,sum;
    printf("***calculate some 1 to given number***\n");
    printf("Enter any Number:");
    scanf("%f",&n);
    ans= ((n/2)+0.5)*n;

    printf("\n 1 to %f sum is:%f",n,ans);

    // OR second way
    printf("\n Second way o/p");
    sum= ((n+1)/2)*n;

    printf("\n 1 to %f sum is:%f",n,sum);
}