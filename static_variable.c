#include<stdio.h>
void main()
{
    int x=10;//local variable
    static int y=15;//static variable  
    x=x+1;
    y=y+1;  
    y=y+1; 
    printf("%d,%d",x,y);
}