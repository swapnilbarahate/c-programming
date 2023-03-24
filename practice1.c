#include<stdio.h>
int main()
{
    int n=5,i,j,k;
    for(i=0;i<n;i++)
    {
        j=0;
        while(j<n)
        {
            k=0;
            while(k<n-i)
            {
                printf("%d",n-j);
                k++;
            }
            j++;
        }
        printf("\n");
    }
}