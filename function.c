#include<stdio.h>
#include<string.h>
int sum();
int decimal_binary();
int main()
{
    int result;
    char opname[40];
    printf("Enter which opreation peform:");
    scanf("%s",opname);
    if(strcmp(opname,"decimal_binary")==0)
    {
        result=decimal_binary();
    }
    else if(strcmp(opname,"sum")==0)
    {
        result=sum();
    }
    else
    {
        printf("swapnil");
    }   
    printf("%d",result);
}
int decimal_binary()
{
    int b=0,d,r,i=1;
    
    printf("***Decimal to Binary***\n");
    printf("Enter the decimal no:");
    scanf("%d",&d);
    while(d>0)
    {
        r=d%2;
        b=b+(i*r);
        i=i*10;
        d=d/2;
    }
    return(b);
}
int sum()
{
    int a,b;
    printf("Enter a and b:");
    scanf("%d %d",&a, &b);
    return(a+b);
}