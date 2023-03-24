#include<stdio.h>
int main()
{
    int decimal=0,base=1,r,octal,binary=0;
    printf("****Octal to Decimal****\n");
    printf("Enter Ocatal Number:");
    scanf("%d",&octal);
    while(octal>0)
    {
        r=octal%10;
        decimal=decimal+base*r;
        octal=octal/10;
        base= base*8;
    }
    printf("Decimal no is:%d\n",decimal);
    base=1;
    while(decimal>0)
    {
        r=decimal%2;
        binary=binary+base*r;
        decimal=decimal/2;
        base= base*10;
    }
    printf("Binary no is:%d\n",binary);
}