#include<stdio.h>
#include<string.h>
int main()
{
    printf("****validation of string Anagram***\n");
    int i,j,temp,flag=1;
    char a[100], b[100];
    printf("Enter the first string:");
    // gets(a);
    scanf("%[^\n]%*c",a);
    printf("\nEnter the second string:");
    scanf("%[^\n]%*c",b);
    // gets(b);
    if(strlen(a)==strlen(b))
    {
        flag=0;
        for(i=0;i<strlen(a);i++)
        {
            (a[i]>=65 && a[i]<=90)?(a[i]=a[i]+32):a[i];
            for(j=i;j<strlen(b);j++)
            {
                (b[j]>=65 && b[j]<=90)?(b[j]=b[j]+32):b[j];
                if(a[i]==b[j])
                {
                    temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                    break;
                }
            }
            if(a[i]==b[i])
            {
                flag =0;
            }
            else{
                flag = 1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nAnagram String");
    }
    else
    {
        printf("\nNot anagram");
    }
}