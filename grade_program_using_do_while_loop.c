#include<stdio.h>
int main()
{
	printf("Grade systeam program using do while loop");
	int mark;char Flag,dummy;
	do{
		printf("\nEnter 0 to 100 Mark:");
		scanf("%d",&mark);
		if(mark>1 && mark<=34)
		{
			printf("Fail");
		}
		else if(mark>34 && mark<=60)
		{
			printf("Grade C");
		}
		else if(mark>60 && mark<=80)
		{
			printf("Grade B");
		}
		else if(mark>80 && mark<=100)
		{
			printf("Grade C");
		}
		else
		{
			printf("sorry Please check your input");
		}
		printf("\nYou Check Continue ? Enter y/n: ");
		scanf("%d",&dummy);
		scanf("%c",&Flag);
	}
	while(Flag == 'Y' || Flag == 'y');
}