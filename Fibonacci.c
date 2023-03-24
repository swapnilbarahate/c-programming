#include<stdio.h>
int fibonacci_recursive();
int fibonacci_itretive();
int main()
{
    int number;
    printf("Enter the the position no:\n");
    scanf("%d",&number);
    printf("at positon %d Fibonacci seriese number is: %d using recursive oproch\n",number,fibonacci_recursive(number));
    printf("\nat positon %d Fibonacci seriese number is: %d using iterative oproch",number,fibonacci_itretive(number));
    return 0;
}
int fibonacci_recursive(int n)
{
    if(n==1 || n==2)
    {
        return n-1;
    }
    else
    {
        return fibonacci_recursive(n-1)+fibonacci_recursive(n-2);
    }
}
int fibonacci_itretive(int n)
{
    int a=0,b=1;
    for(int i=1;i<n;i++)
    {
        printf("%d ",a);
        a=a+b;
        b=a-b;
    }
    return a;
}
