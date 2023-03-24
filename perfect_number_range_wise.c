#include<stdio.h>
int main()
{
    int ran1,ran2,i,num,ans;
    printf("***Range wise Perfect No Find******");
    printf("\nEnte tht Frst value:");
    scanf("%d",&ran1);
    printf("Ente tht Second value:");
    scanf("%d",&ran2);
    if(ran1>ran2)
    {
        num=ran1;
        ran1=ran2;
        ran2=num;
    }
    while(ran1<=ran2)
    {
        ans=0;
        num=ran1;
        for(i=1;i<=num/2;i++)
        {
            if(num%i==0)
            {
                ans=ans+i;
            }
        }
        if(num==ans)
        {
            printf("Perfect no is:%d\n",ans);
        }
        ran1++;
    }
}