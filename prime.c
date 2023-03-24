// #include<stdio.h>
// int main()
// {
//     int n=2,i,flag=0;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if(flag==0)
//     {
//         printf("prime");
//     }
//     else
//     {
//         printf("Not prime");
//     }
// }

// second way of logic using function
#include<stdio.h>
int primeOrNotprime();
int main()
{
    
    int array[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    int flag =0;
    for(int i=0;i<(sizeof(array)/sizeof(int));i++)
    {
        flag = primeOrNotprime(array[i]);
        if(flag==0)
        {
            printf("%d prime\n",array[i]);
        }
        else
        {
            printf("%d not\n",array[i]);
        }
    }
}

int primeOrNotprime(int n)
{
    if(n>1)
    {
        for(int i=2;i<=(n/2)+1;i++)
        {
            if(n%i==0 && i!=n)
            {
                return 1;
                break;
            }
        }
        return 0;
    }
    else
    {
        return 1;
    }
    
}