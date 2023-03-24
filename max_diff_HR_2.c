//array madhil max diffirence kadayach pan right kadun left kade check kart jaycha
//ani jar diff >0 nasel tar return -1 karayacha otherwise return diffirence karayach
#include<stdio.h>
int max_Difference();
int main()
{
    int arr_count,i=0;
    printf("Enter the array Size:\n");
    scanf("%d",&arr_count);
    int arr[arr_count];
    printf("Enter the array element:\n");
    while(i<arr_count)
    {
        scanf("%d",&arr[i]);
        i++;
    }
    printf("max differece is: %d\n ",max_Difference(arr_count,arr));
}
int max_Difference(int arr_count, int* arr)
{
    int i=0, temp=arr[0],diff=0;
    while(i < arr_count)
    {
        if(diff<(arr[i]-temp))
        {
            diff=arr[i]-temp;
        }
        if(temp>arr[i])
        {
            temp=arr[i];
        }
        i++;
    }
    if(diff>0)
    {
        return diff;
    }
    else
    {
        return -1;
    }
}