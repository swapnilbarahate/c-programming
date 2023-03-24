#include<stdio.h>
int main()
{
    printf("pattern_printing_program_usig_while_loop");
    int i=1,j,m,n,num;
    printf("\nEnter any number :");
    scanf("%d",&num);
    while(i<=num)
    {
        for(j=1;j<=i;j++)
        {
            printf("%8d",j);
        }
        printf("\n");
        i++;
    }
    while(i>=1)
    {
        for(j=1;j<=i-2;j++)
        {
            printf("%8d",j);
        }
        printf("\n");
        i--;
    }

}