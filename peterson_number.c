#include<stdio.h>
int main()
{
    int num,temp,r,ans=0,fact=1,flag=1;
    printf("Enter the decimal no:");
    scanf("%d",&num);
    temp = num;
    while(num>0)
    {
        if (flag==1)
        {
            r = num%10;
        }
        if (r>0)
        {
            fact = fact*r;
            flag = 0;
            r--;
        }
        else
        {
            flag = 1;
            ans = ans+fact;
            fact = 1;
            num = num/10;
        }
    }
    if (temp==ans)
    {
        printf("is peterson");
    }
    else
    {
        printf("not peterson");
    }
}