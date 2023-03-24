#include<stdio.h>
int main()
{
    int num,temp,r=0,ans=0;
    printf("*****Palindrom NO program*****************\n\n");
    printf("Enter the any Number:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=num%10;
        ans=ans*10+r;
        num=num/10;
    }
    printf("\nReverse of Original value is:%d",ans);
    if(ans==temp)
    {
        
        printf("\nPalindrom");
    }
    else
    {
        printf("\nNot Palindrom");
    }
}