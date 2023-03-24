#include<stdio.h>
int main()
{
    printf("*** CHEK GIVEN STRING ARE PALIN DEOMP OR NOT***\n");
    char str[]="nitin";//it palindrom reveser is same to orignal
    int i=0,j,len=0,flag=0;
    while(str[i]!='\0')
    {
        //len++;
        i++;
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            flag =1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0)
    {
        printf("Palindrom");
    }
    else
    {
        printf("NOT Palindrom");
    }
}