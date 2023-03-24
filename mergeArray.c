#include<stdio.h>
void mergeArr(int arr1[],int arr2[], int n1, int n2)
{
	int start=0,end=n2-1,cnt=1,t=0,put,i,key,q;
	while(end>=0)
	{
		key=arr2[end];
		for(i=0;i<n1+cnt;i++)
		{
			if(arr1[i]<key && i<n1)
				i++;
			else if(i<n1)
			{
				
				t=i;
				put=arr1[t];
				arr1[t]=key;
				q=n1-1+cnt;
				while(q>t)
				{
					arr1[q+1]=arr1[q];
					q--;
				}
				arr1[q]=put;
				
				
			}
		}
		cnt++;
		end--;
	}
	for(i=0;i<n1+n2;i++)
		printf("%d ",arr1[i]);
}
int main()
{
	int arr1[500],arr2[200],n1,n2,i;
	printf("Enter arr1 and arr2 sizes:");
	scanf("%d%d",&n1,&n2);
	if(n1<=300 && n2<=200)
	{
		printf("Enter arr1 element:\n");
		for(i=0;i<n1;i++)
			scanf("%d",&arr1[i]);
		printf("Enter arr2 elements:\n");
		for(i=0;i<n2;i++)
			scanf("%d",&arr2[i]);
		mergeArr(arr1,arr2,n1,n2);
	}
	else
	{
		printf("Enter valid length of array:\n");
	}
	return 0;

}
