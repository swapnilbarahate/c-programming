#include<stdio.h>
#include<string.h>
void main()
{
    printf("***count numbers and alphabets in input string****\n");
    int alphabet=0,numbers=0,length,i;
    char a[100];
    printf("Enter any string:\n");
    scanf("%[^\n]s",a);
    length= strlen(a);
    for(i=0;i<length;i++)
    {
        if(a[i]>=48 && a[i]<=57)
        {
            numbers++;
        }
        else if((a[i]>=65 && a[i]<=90)||(a[i]>=97 && a[i]<=122))
        {
            alphabet++;
        }

    }
    printf("\nAlphabets is:%d",alphabet);
    printf("\nNumbers is:%d",numbers);
    printf("\nOther is:%d",length-(numbers+alphabet));
}