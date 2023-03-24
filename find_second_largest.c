#include<stdio.h>
int main()
{
    int i,len,a[100];
    printf("Enter the size of the array?");  
    scanf("%d",&len);  
    printf("Enter the elements of the array:\n");  
    for(i=0; i<len; i++)  
    {  
        scanf("%d",&a[i]);  
    }  
    // int a[] = {22,34,55,1,2,87,33,44,29,67,70,33,33,100,77,0,-1,-4,11,102};
    int largest=a[0],second_largest=a[0], smallest=a[0];
    // len= sizeof(a)/sizeof(a[0]);
    printf("Length is:%d\n",len);
    i=0;
    while(i<len)
    {
        if(a[i]<smallest)
        {
            smallest=a[i];
        }
        else if(a[i]>largest)
        {
           second_largest=largest;
           largest=a[i];
        }
        else if(a[i]>second_largest)
        {
            second_largest=a[i];
        }
        i++;
    }
    printf("Smallest value is:%d\n",smallest);
    printf("Second Largest value is:%d\n",second_largest);
    printf("Largest value is:%d",largest);
}