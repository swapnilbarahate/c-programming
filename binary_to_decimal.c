#include<stdio.h>
int main()
{
    int decimal=0,base=1,r;
    unsigned long long int binary;
    printf("****Binary to Decimal****\n");
    printf("Enter Binary no 0 & 1 Format:");
    scanf("%llu",&binary);
    while(binary>0)
    {
        r=binary%10;
        decimal=decimal+base*r;
        binary=binary/10;
        base= base*2;
    }
    printf("Decimal no is:%d",decimal);
}