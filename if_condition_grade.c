#include<stdio.h>
int main()
{
	//Grade 100-81=A, 80-61=B, 60-41=C,40-35= D pass,35>Fail
	int mark;
	printf("Enter the Student Marks:");
	scanf("%d",&mark);	
	if(mark<=100 && mark>80)
	{
		printf("\n First Class in A Grade");
	}
	else if(mark<=80 && mark>60)
	{
		printf("\n Second Class in B Grade");
	}
	else if(mark<=60 && mark>40)
	{
		printf("\n Third Class in C Grade");
	}
	else if(mark<=40 && mark>=35)
	{
		printf("\n Pass Class in D Grade");
	}
	else if(mark<35)
	{
		printf("\n Student Fail");
	}
	else
	{
		printf("\n Invalid mark entered");
	}		
}
