#include<stdio.h>
int main()
{
    int b,r,ans=0;
    printf("Enter the Number:");
    scanf("%d",&b);
    while(b>0)
    {
        r=b%10;
        ans=ans+r;
        b=b/10;
        // printf("\n R: %d",r);
        // printf("\n B: %d",b);

        if(b==0 && ans>=10)
        {
            b=ans;
            ans=0;
        }
        else{
            //printf("\n Final ans: %d",ans);
        }
    }
    printf("\nFinal ans: %d",ans);
}