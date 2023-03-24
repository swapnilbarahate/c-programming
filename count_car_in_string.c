#include<stdio.h>
#include<string.h>
void main()
{
    printf("***count the character how many time present in a String***\n");
    int i,count=0,len,position;
    char a[200];
    int b[36]={count};
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
        else if(a[i]>=48 && a[i]<=57)
        {
            position = a[i]-22;
            b[position] = b[position]+1;
        }
    } 
    printf("O/p:\n");  
    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            position = a[i]-65;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            position = a[i]-97;
        }
        else if(a[i]>=48 && a[i]<=57)
        {
            position = a[i]-22;
        }
        if(b[position]>0)
        {
            if(position<26)
            {
                printf("%c = %d\n",position+97,b[position]);
                b[position]=0;
            }
            else if(position>=26)
            {
                printf("%c = %d\n",position+22,b[position]);
                b[position]=0;
            }
            
        } 
    }
}