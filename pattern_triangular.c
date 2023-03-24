//using function call by value
#include<stdio.h>
void triangularstarpattern();
void reverstriangularstarpattern();
int main()
{
    int choice,number;
    user_choice:
        printf("Triangular press Zero 0\nReverse Triangular press one 1\nEnter your choice which star pattern print ?:");
        scanf("%d",&choice);
 
    switch (choice)
    {
    case 0:
        printf("\nEnter Number:");
        scanf("%d",&number);
        triangularstarpattern(number);
        break;
    case 1:
        printf("\nEnter Number:");
        scanf("%d",&number);
        reverstriangularstarpattern(number);
        break;
    
    default:
        goto user_choice;
    }
}
void triangularstarpattern(int number)
{
    for(int i=0;i<number;i++)
    {
        int j=i;
        while(j>=0)
        {
            printf("* ");
            j--;
        }
        printf("\n");
    }
}
void reverstriangularstarpattern(int number)
{
    for(int i=number;i>0;i--)
    {
        int j=i;
        while(j>0)
        {
            printf("* ");
            j--;
        }
        printf("\n");
    }
}