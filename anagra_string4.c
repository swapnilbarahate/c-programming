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
    //char str1[]="swapnil shivaji barahate";//anargram mhanje frist string madil sarv charcter
    //char str2[]="swnialp reha tabashivaji";// second string madhe pahije sequence matter karat nahi
    // int arr[52]={0};
    int ans=0,i;
    for(i=0;str1[i]!='\0';i++)
    {
        if(str1[i]>90)
        {
            ans=ans+(str1[i]-32);
        }
        else
        {
            ans=ans+str1[i];
        }
    }
    for(i=0;str2[i]!='\0';i++)
    {
        if (str2[i]>90)
        {
            ans=ans-(str2[i]-32);
        }
        else
        {
            ans=ans-str2[i];
        }
    }
    if(ans==0)
    {
        printf("\nanagram");
    }
    else
    {
        printf("\nnot anagram");
    }
}

