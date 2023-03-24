#include<stdio.h>
#include<string.h>
int main()
{

    int n,i=0,j=0,temp;
    char a[100];
    printf("***string revers but do not change space position***\n");
    printf("Enter any string:");
    //gets(a);
    scanf("%[^\n]s",a);
    printf("i/p:%s",a);
    n = strlen(a);
    while(i<n/2)
    {
        if(a[i]!=32 && a[n-1-i]!=32)
        {
            temp=a[i];
            a[i]=a[n-1-i];
            a[n-1-i]=temp;
        }
        else
        {
           
        }
        i++;
    }
    printf("\no/p:%s",a);
}
 