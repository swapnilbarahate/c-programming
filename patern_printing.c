#include<stdio.h>
int main()
{
    int num,i,j,m,n; char dummy;
    printf("Enter the any Number :");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d  ",j);
        }
        printf("\n");
    }
    for(m=num-1;m>=1;m--)
    {
        for(n=1;n<=m;n++)
        {
            printf("%d  ",n);
        }
        printf("\n");
    }
}