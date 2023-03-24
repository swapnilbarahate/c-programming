#include<stdio.h>
int main()
{
    int num,temp,ans=0,r;
    printf("****Perfect No program******");
    printf("\nEnte any Number: ");
    scanf("%d",&num);
    temp=num;
    while(num>0)
    {
        r=temp%num;
        if(r==0 && num<temp)
        {
            ans=ans+num;
        }
        num--;
    }
    if(temp==ans)
    {
        printf("PERFECT\n");
    }
    else{
        printf("Not\n");
    }
}