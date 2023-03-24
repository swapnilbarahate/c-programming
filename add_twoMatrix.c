#include<stdio.h>
int main()
{
    int n,i,j;
    printf("**** Two dimensional array *******\n");
    printf("**** Addition of two matrix arry *******\n");
    printf("Enter matrix size:");
    scanf("%d",&n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter the First A matrix value:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          printf("Enter in position i%d j%d:",i,j);scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the Second B matrix value:\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
          printf("Enter in position i%d j%d:",i,j);scanf("%d",&b[i][j]);
        }
    }
    printf("\n************ Addition of two matrix is belwo ***************\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            int ans=a[i][j] + b[i][j];
            if(j==n)
            {
                printf("%d",ans);
            }
            else
            {
                if(ans<10)
                {
                    printf("%d    ",ans);
                }
                else if(ans>9 && ans<100)
                {
                    printf("%d   ",ans);
                }
                else if(ans>99 && ans<999)
                {
                    printf("%d  ",ans);
                }
                else{
                    printf("%d ",ans);
                }
            }
        }
        if(j==n+1)
        {
            printf("\n");
        }
    }
}