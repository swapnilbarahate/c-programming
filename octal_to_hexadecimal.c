#include<stdio.h>
int main()
{
    int decimal=0,i=1,r,octal;
    char h[100];
    printf("****Octal to Decimal****\n");
    printf("Enter Ocatal Number:");
    scanf("%d",&octal);
    while(octal>0)
    {
        r=octal%10;
        decimal=decimal+i*r;
        octal=octal/10;
        i= i*8;
    }
    printf("Decimal no is:%d\n",decimal);

    int i=0;
    while(decimal>0)
    {
        r=decimal%16;
        if(r>9)
        {
            h[i]=r+55;
        }
        else{
            h[i]=r+48;
        }
        decimal=decimal/16;
        i++;
    }
    printf("Hexdecimal no is:");
    while(i-1>=0)
    {
       printf("%c",h[i-1]);
       i--;
    }
}