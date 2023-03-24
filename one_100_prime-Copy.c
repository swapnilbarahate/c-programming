#include<stdio.h>
int main()
{
    int num1,num2,n,temp,i;
    printf("Enter the First Rang value:");
    scanf("%d",&num1);
    printf("Enter the Second Rang value:");
    scanf("%d",&num2);
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
    for(i=num1;i<=num2;i++)
    {
        temp = 0;
        if(i==1)
        {
            continue;
        }
        else
        {
            for(n=2;n<i;n++)
            {
                if(i%n==0)
                {
                    temp = 1;
                    break;
                }
            }
            if(temp==0)
            {
                printf("%d is prime \n",i);
            }
        }
    }
}