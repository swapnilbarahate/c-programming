#include<stdio.h>
int main()
{
    int i=0,j,decimal=0,octal=0;
    char h[100];
    printf("***Hexadecimal to Binary***\n");
    printf("Enter Hexadecimal Value:");
    scanf("%s",h);
    while(h[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=1;
    while(j>=0)
    {
        if(h[j]<57)
        {
            decimal=decimal+(h[j]-48)*i;
        }
        else{
            decimal=decimal+(h[j]-55)*i;
        }
        j--;
        i=i*16;
    }
    printf("Decimal:%d",decimal);
    i=1;
    while(decimal>0)
    {
        octal=octal+(decimal%8)*i;
        decimal=decimal/8;
        i=i*10;
    }
    printf("\nOctal:%d\n",octal);
}