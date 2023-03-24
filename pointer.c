#include<stdio.h>
int main()
{
    printf("lets learn about pointer\n");
    int a = 55;
    int* ptra= &a;//& ne a cha memory address show hoto 
                 //* is dereference oprator (also called as indirection oprator)
                 // used to get the value of given address
    printf("The value of a is:%x\n",ptra);// %x ne hex print kares and ptra a cha memory address print karel.
    printf("The value of a is:%d\n",*ptra);// *ptra a chi value print karel.
}