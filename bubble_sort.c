#include<stdio.h>
int main()
{
    int a[]={5,3,3,2,19,2,1,15,20,4},i=0,j,n,temp;
    n= sizeof(a)/sizeof(a[n]);
    while(i<n)
    {
        j=0;
        while(j<n-1-i)
        {
            if(a[j]>a[j+1])
            {
                a[j]  = a[j+1] + a[j];
                a[j+1]= a[j] - a[j+1];
                a[j]  = a[j] - a[j+1];

                // temp=a[j];
                // a[j]=a[j+1];
                // a[j+1]=temp;
             printf("%d,",a[j]);     
            }
            //printf("%d,",a[j]);
            j++;
        }
        i++;
    }
    printf("Lowest to higest:");
    j=0;
    while(j<n)
    {
        printf("%d,",a[j]);
        j++;
    }
}


//second way
// #include<stdio.h>
// int main()
// {
//     int i=0,n,temp;
//     int a[] = {0,0,0,0,1,1,1,1};
//     n= sizeof(a)/sizeof(a[0]);
//     while(i<n)
//     {
//         if(a[i]>a[i+1])
//         {
//         //    a[i]      = a[i+1] + a[i];
//         //     a[i+1]   = a[i]   - a[i+1];
//         //     a[i]     =a[i]    - a[i+1];
//             temp=a[i];
//             a[i]=a[i+1];
//             a[i+1]=temp;
//         }
//         i++;
//         if(i==n && n>0)
//         {
//             i=0;
//             n=n-1;
//         }
//     }
//     printf("\n%d",a[(sizeof(a)/sizeof(a[0]))-2]);
// }

