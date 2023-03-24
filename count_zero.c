// #include<stdio.h>
// int main()
// {
//     int i=0,j=0,a[]={1,1,1,1,1,1,1,1,1};
//     int size = sizeof(a)/sizeof(a[i]);
//     while(i<=size-1)
//     {
//         if(a[i]==5)
//         {
//             j=j+1;
//         }
//         i++;
//     }
//     printf("%d",size);
// }

#include<stdio.h>
int main()
{
    int i=0,j=0,as;
    printf("How many element:");
    scanf("%d",&as);
    int a[as];
    while(j<as)
    {
        printf("element:");
        scanf("%d",&a[j]);
        j++;
    }
    j=0;
    while(i<as)
    {
        if(a[i]==1)
        {
            j=j+1;
        }
        i++;
    }
    printf("%d",j);
}