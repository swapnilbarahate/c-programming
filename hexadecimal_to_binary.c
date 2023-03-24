#include<stdio.h>
int main()
{
    int i=0,j,decimal=0,binary=0;
    char h[100];
    printf("***Hexadecimal to Binary***\n");
    printf("Enter Hexadecimal Value:");
    gets(h);
    //scanf("%s",h);
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
    printf("\nDecimal:%d",decimal);
    i=1;
    while(decimal>0)
    {
        binary=binary+(decimal%2)*i;
        decimal=decimal/2;
        i=i*10;
    }
    printf("\nBinary:%d",binary);
}