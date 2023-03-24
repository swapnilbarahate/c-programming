#include<stdio.h>
#include<string.h>
int main()
{
    char a[100]="uudduduuududdd",start;
    int i,ans=0,temp=0,flag=1,len,count=0;
    len = strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]=='u')
        {
            temp =1;
        }
        else
        {
            temp =-1;
        }
        if(flag==1 && ans == 0)
        {
            start = a[i];
        }
        ans=ans+temp;
        flag=0;
        if(ans ==0)
        {
            flag=1;
        }
        if(ans==0 && start == 'u')
        {
            count++;
        }
    }
    printf("counting valleys is:%d",count);
}