#include<stdio.h>
char string_reverse();
int main()
{
    printf("*** String revese using function ***\n");
    char str[100];
    printf("Enter any string:\n");
    scanf("%[^\n]s",str);
    string_reverse(str);
    printf("%s",str);
}
char  string_reverse(char * arr)
{
    int i=0,j=0;
    while(arr[i]!='\0')
    {
        i++;
    }
    j=i-1;
    i=0;
    while(i<j)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
        i++;
        j--;
    }
}