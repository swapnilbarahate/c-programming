#include<stdio.h>
#include<math.h>
int main()
{
    int ans=0,i=0,j=0,octal=0;
    unsigned long long int binary;
    char h[] = {};
    printf("****Binary to octal****\n");
    printf("Enter Binary no 0 & 1 Format:");
    scanf("%llu",&binary);
    while(binary>0)
    {
        ans = ans+((binary%10)*pow(2,i));
        i++;
        binary=binary/10;
    }
    printf("Decimal no is: %d\n",ans);
    i=1;
    while(ans>0)
    {
        octal = octal+(ans%8)*i;
        ans = ans/8;
        i = i*10;
    }
    printf("%d",octal);
}