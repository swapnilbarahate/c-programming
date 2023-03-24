#include<stdio.h>
int main()
{
	int h,n;
	printf("First way of check Even and Odd number checking");
	printf("\nHow many Number find ? Even & odd :");
	scanf("%d",&h);
	for(int i=h;i>=0;i--)
	{
		printf("\nEnter any Number:");
		scanf("%d",&n);
		
		if(n%2==0)
		{
			printf("%s","Given Number is Even");
		}
		else{
			printf("%s","Given Number is Odd");
		}
	}
}