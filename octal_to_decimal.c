//First solution
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int num=140,ans=0,r,exp=0;
//     while(num>0)
//     {
//         r = num%10;
//         ans = ans+r*pow(8,exp);
//         num = num/10;
//         exp++;
//     }
//     printf("%d",ans);
// }

//second solution
#include<stdio.h>
int main()
{
    int decimal=0,base=1,r,octal;
    printf("****Octal to Decimal****\n");
    printf("Enter Ocatal Number:");
    scanf("%d",&octal);
    while(octal>0)
    {
        r=octal%10;
        decimal=decimal+base*r;
        octal=octal/10;
        base= base*8;
    }
    printf("Decimal no is:%d",decimal);
}
