//fuction calling call by refernce 
//call by referce mahanje actual parameter  cha memoori address share kela jato
//formal parameter la 
//swaping tow numbers
#include<stdio.h>
void swap(int* x, int* y)
{
    int temp;
    temp = *x;//save the value at address x
    *x=*y;//put y into x
    *y= temp;//put temp into y
    return;
}
int main()
{
    int a=30,b=50;
    printf("a:%d b:%d",a,b);
    swap(&a,&b);
    printf("\na:%d b:%d",a,b);
    return 0;
}
