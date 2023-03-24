//static input
// #include <stdio.h>
// #include<string.h>
// char a[]="vaibhav";
// int i=0,n;
// int main()
// {
//     n = strlen(a);
//     while(i<n/2)
//     {
//         a[i] = a[i]+a[n-1-i];
//         a[n-1-i] =a[i]-a[n-1-i];
//         a[i] = a[i]-a[n-1-i];
//         i++;
//     }
//     printf("a = %s",a);
// }

//get dynamic input
#include <stdio.h>
#include<string.h>
char string_reverse();
int main()
{
    char a[100];
    char b[100];
    printf("***string revers***\n");
    printf("Enter any string:");
    scanf("%[^\n]",a);
   // gets(a);
    string_reverse(a);
    printf("%s",a);
}
char string_reverse(char *a)
{
    int i=0,n;
    n = strlen(a);
    while(i<n/2)
    {
        a[i] = a[i]+a[n-1-i];
        a[n-1-i] =a[i]-a[n-1-i];
        a[i] = a[i]-a[n-1-i];
        i++;
    }
    //printf("a = %s",a);
    return *a;
}

