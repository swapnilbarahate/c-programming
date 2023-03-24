#include<stdio.h>
int main()
{
    int num,temp,len=0,sum=0,rem,ans=1,i;
    printf("Enter the number to check armstrong:");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        num =num/10;
        len++;
    }
    num=temp;
    while(num>0)
    {
       rem=num%10;
       i=len;
       while(i>0)
       {
         ans=rem*ans;
         i--;
       }
       sum= sum+ans;
       ans=1;
       num=num/10;
    }
    if(sum==temp)
    {
        printf("Armstrong");
    }
    else
    {
        printf("Not armstrong");
    }
}