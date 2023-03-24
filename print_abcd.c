#include<stdio.h>
void main()
{
    printf("***Print a to z alphabets***\n");
    for(int i=0;i<26;i++)
    {
        printf("%c%c ",i+97,i+65);
    }
}