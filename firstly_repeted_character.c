#include<stdio.h>
#include<string.h>
void main()
{
    printf("***which is character firstly repeate in a string***\n");
    int i,count=0,len,position;
    char a[50];
    int b[26]={count};
    printf("Enter any string:");
    scanf("%[^\n]s",a);
    len= strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            position = a[i]-65;
            b[position] = b[position]+1;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            position = a[i]-97;
            b[position] = b[position]+1;
        }
        if(b[position]>1)
        {
            printf("Fistly reapeated character is:%c",position+97);
            break;
        }
    }
}