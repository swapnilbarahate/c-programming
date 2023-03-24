#include <stdio.h>  
int main()  
{  
   int a,b,c,d,e,f,g,h,i,j,k;
   //logical AND('&')
   printf("Enter Value of A:");
   scanf("%d",&a);
   printf("Enter Value of B:");
   scanf("%d",&b);
   printf("The output of the Bitwise AND operator a&b is:%d",a&b);
   
    //logical OR('|')
    printf("Enter First Value:");
   scanf("%d",&c);
   printf("Enter Second Value:");
   scanf("%d",&d);
   printf("The output of the Bitwise OR operator a|b is:%d",c^d);

    //Bitwise XOR operator('|')
    printf("Enter First Value:");
   scanf("%d",&e);
   printf("Enter Second Value:");
   scanf("%d",&f);
   printf("The output of the Bitwise XOR operator a^b is:%d",e^f);

    //Bitwise complement operator('~')
   printf("\nEnter Value:");
   scanf("%d",&g);
   printf("The output of the Bitwise complement('~')  is:%d",~g);
   
   //Left-shift operator
   printf("\nEnter Value:");
   scanf("%d",&h);
   printf("How many digit shift to left:");
   scanf("%d",&i);
   printf("The output of the Bitwise left shift operator (<<) is:%d",h<<i);

   //Right-shift operator
   printf("\nEnter Value:");
   scanf("%d",&j);
   printf("How many digit shift right:");
   scanf("%d",&k);
   printf("The output of the Bitwise Right shift operator (>>) is:%d",j>>k);
   return 0;
}  