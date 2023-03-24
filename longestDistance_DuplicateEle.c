#include<stdio.h>
#include<string.h>
//find the longest distance between duplicate elementnt in string
char longestDistance();
int main()
{
    char  arr[] ="ab2456789a12b5";
    int len= strlen(arr);
    int ans = longestDistance(arr,len);
    printf("\nDuplicate element longest Distance: %d",ans);
    
}
char longestDistance(char arr[], int len)
{
    int i,temp=0,distance=0;
    int a[26] ={-1};
    int b[26] ={-1};
    for(i=0;i<len;i++){
        int element = arr[i];
        if(a[element -97]<0)
        {
            a[element -97]= i;
        }
        b[element -97]= i;
    }
    
    for(i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            temp = b[i]-a[i];
            if(temp>distance)
            {
                distance = temp;
            }
        }
    }
    return distance;
}
