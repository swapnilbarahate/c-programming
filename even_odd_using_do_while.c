#include<stdio.h>
int main()
{
	int num; char choice,dummy;
	do{
		printf("Enter any Number:");
		scanf("%d",&num);
		if(num%2==0)
		{
			printf("Given Number is Even");
		}
		else
		{
			printf("Given Number is Odd");
		}
		printf("\nchek othe number Y/N ?  :");
		scanf("%d",&dummy);
		scanf("%c",&choice);
	}while(choice == 'Y' || choice == 'y');
}
