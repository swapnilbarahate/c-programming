#include<stdio.h>
int main()
{
    int fact=1,n;
    printf("Enter no to find Factorial: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    printf("Factorial is: %d",fact);
}