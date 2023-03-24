#include<stdio.h>
int main()
{
	printf("Event Odd program using while loop");
	int m,n,no_of_etration=1;
	printf("\nyou how many number checking ?:");
	scanf("%d",&m);
	while(m-1>=0)
	{
		printf("\n\nEnter %d %s",no_of_etration,"Number value:");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("%s","Geven Number is Even");
		}
		else
		{
			printf("%s","Geven Number is Odd");
		}
		m--;
		no_of_etration++;
	}
}