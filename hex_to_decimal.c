#include<stdio.h>
int main()
{
    char h[]="BB";
    int i=0,j,ans=0;
    while(h[i]!='\0')
    {
       i++;
    }
    j=i-1;
    i=1;
    while(j>=0)
    {
        if(h[j]<=57)
        {
            printf("f:%d\n",ans);
            ans=ans+(h[j]-48)*i;
        }
        else if(h[j]>=65)
        {
            printf("s:%d\n",ans);
            ans=ans+(h[j]-55)*i;
        }
        j--;
        i=i*16;
    }
    printf("Decimal is:%d\n",ans);
}