#include<stdio.h>
int main()
{
    int o=0,d,r,i=1;
    printf("***Decimal to Ocatal***\n");
    printf("Enter the decimal no:");
    scanf("%d",&d);
    while(d>0)
    {
        r=d%8;
        o=o+(i*r);
        i=i*10;
        d=d/8;
    }
    printf("Ocatal no is:%d\n",o);
}