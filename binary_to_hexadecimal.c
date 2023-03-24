#include<stdio.h>
#include<math.h>
int main()
{
    int ans=0,i=0,j=0;
    unsigned long long int binary;
    char h[] = {};
    printf("****Binary to hexadecimal****\n");
    printf("Enter Binary no 0 & 1 Format:");
    scanf("%llu",&binary);
    while(binary>0)
    {
        ans = ans+((binary%10)*pow(2,i));
        i++;
        binary=binary/10;
    }
    printf("Decimal no is: %d\n",ans);
    i=0,j=0;
    while(ans>0)
    {
        if(ans%16>9)
        {
            h[j]=((ans%16)+55);
        }
        else
        {
            h[j]=((ans%16)+48);
        }
        ans = ans/16;
        i++;
        j++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%c",h[j]);
    }
}