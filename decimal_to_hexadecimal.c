// #include<stdio.h>
// int main()
// {
//     int d,h=0,i=1,r;
//     printf("Enter the decimal no:");
//     scanf("%d",&d);
//     while(d>0)
//     {
//         r=d%16;
//         h=h+r*i;
//         i=i*10;
//         d=d/16;
//     }
//     if(r>9)
//     {
//         h=r+55;
//         printf("Hex no is:%c",h);
//     }
//     else
//     {
//         printf("Hex no is:%d",h);
//     }
// }

#include<stdio.h>
int main()
{
    int r,i,j=0;
    unsigned long long int  d,temp;
    char h[100];
    printf("Enter the decimal no:");
    scanf("%llu",&d);
    printf("%llu",d);
    temp=d;
    while(d>0)
    {
        r=d%16;
        if(r>9)
        {
            h[j]= r+55;
        }
        else
        {
            h[j]= r+48;
        }
        j++;
        d=d/16;
    }
    printf("%ld Hexadecimal Number is:",temp);
    for(i=j-1;i>=0;i--)
    {
        printf("%c",h[i]);
    }
}
