#include<stdio.h>
int main()
{
    int i=1, no;
    printf("which number table print:");
    scanf("%d",&no);
    table:
    printf("%d x %d = %d\n",no,i,no*i);
    i++;
    if(i<=10)
    goto table;
}