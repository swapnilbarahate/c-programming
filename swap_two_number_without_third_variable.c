#include<stdio.h>
int a=-11, b=-9;
int main(){
a= a+b;
b= a-b;
a= a-b;

printf("A= %d\n",a);
printf("B= %d\n",b);

return 0;
    
}