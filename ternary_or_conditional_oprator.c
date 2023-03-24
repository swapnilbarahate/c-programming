#include<stdio.h>
int main()
{
    int age;//variable declaration
    printf("Enter the Age:");
    scanf("%d",&age);//take user input for age variable
    (age>=18)? (printf("Eligible for voting")) : (printf("Not Eligible for voting"));//conditional oprator used
    return 0;
}