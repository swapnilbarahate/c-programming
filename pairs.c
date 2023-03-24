#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a[100],i,j,length,addition=6;
    printf("count the number of pairs where addition is 6 \n",addition);
    printf("Enter array size:");
    scanf("%d",&length);
    printf("Enter value:");
    for(i=0;i<length;i++) 
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<length-1;i++)
    {
    
        j=i+1;
        while(j<length)
        {
            if(a[i]+a[j]==addition)
            {
                printf("(%d,%d)",a[i],a[j]);
            }
            j++;
        }
    }
}