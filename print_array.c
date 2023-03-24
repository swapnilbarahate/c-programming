#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,j=0;
    int a[] = {0,1,2,3};
    int b[] = {4,6,5,7,8,9};
    for(i=0,j=0;i<sizeof(a)/sizeof(a[0]),j<sizeof(b)/sizeof(b[0]);)
    {
        if(i<sizeof(a)/sizeof(a[0]))
        {
            printf("%d ",a[i]);
            i++;
        }
        if(j<sizeof(b)/sizeof(b[0]))
        {
            printf("%d ",b[j]);
            j++;
        }
    }
}