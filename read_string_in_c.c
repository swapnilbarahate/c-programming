#include<stdio.h>
void main(){
    char string[] = {1,2,4,5};
    int i=0;
    while(string[i]!='\0')
    {
        printf("%d",string[i]);
        i++;
    }
}