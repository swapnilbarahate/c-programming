#include<stdio.h>
int main()
{
    int h=0,i=0,n,small;
    int a[] = {10,2,2,7,1,1,1,1,15,16,44,3,5,10,22,22,80,30};
    n= sizeof(a)/sizeof(a[0]);
    small=a[0];
    h=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]>h)
        {
            h=a[i];
        }
        if(small>a[i])
        {
            small=a[i];
        }
    }
    printf("\nMax diffarance %d - %d is: %d",small,h,(h-small));
}