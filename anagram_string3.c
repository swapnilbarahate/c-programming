#include<stdio.h>
int main()
{
    char str1[1000];
    char str2[1000];
    printf("**** anagram string ***\n");
    printf("Enter Frist string\n");
    //scanf("%[^\n]s",str1);
    gets(str1);
    printf("Enter second string\n");
    gets(str2);
    //scanf("%[^\n]s",str2); 
    //char str1[]="swapnil shivaji barahate";//anargram mhanje frist string madil sarv charcter
    //char str2[]="swnialp reha tabashivaji";// second string madhe pahije sequence matter karat nahi
    int arr[52]={0};
    int flag=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>=97 && str1[i]<=122)
        {
            arr[str1[i]-97]++;
        }
        else if(str1[i]>=65 && str1[i]<=90)
        {
            arr[str1[i]-39]++;
        }
        
    }
    for(i=0;str2[i]!='\0';i++)
    {
        if(str2[i]>=97 && str2[i]<=122)
        {
            arr[str2[i]-97]--;
        }
        else if(str2[i]>=65 && str2[i]<=90)
        {
            arr[str2[i]-39]--;
        }
    }
    for(i=0;i<52;i++)
    {
        if(arr[i]==0)
        {
        }
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("\nanagram");
    }
    else
    {
        printf("\nnot anagram");
    }
}