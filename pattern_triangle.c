#include<stdio.h>
int main()
{
    
    int i,j,n;
    
    printf("Trangle printing\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n-i;j++)    
        {    
            printf(" ");    
        }   
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=j-2;i>0;i--)
    {
        for(j=1;j<=n-i;j++)    
        {    
            printf(" ");    
        }   
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}