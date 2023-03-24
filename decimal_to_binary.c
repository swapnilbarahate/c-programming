#include<stdio.h>
int main()
{
    int b=0,d,r,i=1;
    
    printf("***Decimal to Binary***\n");
    printf("Enter the decimal no:");
    scanf("%d",&d);
    while(d>0)
    {
        r=d%2;
        b=b+(i*r);
        i=i*10;
        d=d/2;
    }
    printf("\nBinary no is:%d",b);
}