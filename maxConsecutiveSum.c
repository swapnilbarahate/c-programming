#include<stdio.h>
void subArrSum(int arr[],int n)
{
	int max_sum=-99999,last_sum=0,start=0,current=0,i;
	for(i=0;i<n;i++)
	{
		last_sum=last_sum+arr[i];
		if(last_sum>max_sum)
		{
			max_sum=last_sum;
			current=i;
			//printf("current:-%d\n",current);
		}
		if(last_sum<0)
		{
			last_sum=0;
			start=i;
			//printf("%d\n",start);
		}
	/*	else 
		{
			current++;
		}*/
	}
	printf("{");
	for(int j=start+1;j<=current;j++)
	{
		printf("%d,",arr[j]);
	}
	printf("}");
}

int main()
{
	int arr[]={ -1 , 2 , 3 , -7 , 12 , -3, 0 , 1 , 3},n;
	n=sizeof(arr)/sizeof(arr[0]);
	subArrSum(arr,n);
	return 0;
}
