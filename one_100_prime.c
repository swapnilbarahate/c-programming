#include<stdio.h>
int main()
{
    int num1,num2,n,f,l,i;
    printf("Enter the First Rang value:");
    scanf("%d",&num1);
    printf("Enter the Second Rang value:");
    scanf("%d",&num2);
    if(num1<num2)
    {
        f=num1;
        l=num2;
    }
    else{
        f=num2;
        l=num1;
    }
    for(i=f;i<=l;i++)
    {
        if(i==1)
        {
            printf("%d is Not prime\n ",i);
           
        }
        else if(i==2)
        {
            printf("%d is prime\n",i);
           
        }
        else
        {
            for(n=2;n<i;n++)
            {
                if(i%n==0)
                {
                    printf("%d is Not prime \n",i);
                    break;
                }
            }
            if(n==i)
            {
                printf("%d is prime \n",i);
    
            }
        }
    }
}