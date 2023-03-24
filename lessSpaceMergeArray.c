#include <stdio.h>
void mergeArr(int A[], int B[], int n1, int n2)
{
	int A_end = n1 - 1, B_end = n2 - 1, i = 0, len = n1 + n2 - 1;
	int end = B_end, temp;
	while (i < n2 / 2)
	{
		temp = B[i];
		B[i] = B[end];
		B[end] = temp;
		i++;
		end--;
	}
	while (A_end >= 0 && B_end >= 0)
	{
		if (A[A_end] == B[B_end])
		{
			
			A[len--] = B[B_end--];
			A[len--] = A[A_end--];
			//printf("A_end=%d,B_end=%d",A_end,B_end);
		}
		else if (A[A_end] > B[B_end])
		{
			A[len--] = A[A_end--];
			//printf("A_end=%d,B_end=%d\n",A_end,B_end);
		}
		else if (B[B_end] > A[A_end])
		{
			A[len--] = B[B_end--];
			//printf("A_end=%d,B_end=%d\n",A_end,B_end);
		}
	}
	while (A_end == -1 && B_end >= 0)
	{
		A[len--] = B[B_end--];
	}
	while (B_end == -1 && A_end >= 0)
	{
		A[len--] = A[A_end--];
	}

	printf("Final Array contains: A=[ ");
	for (i = 0; i < n1 + n2; i++)
	{
		printf("%d ", A[i]);
	}
	printf("]\n");
}
int main()
{
	int n1, n2, i;
	printf("Enter A and B sizes:\n");
	scanf("%d%d", &n1, &n2);
	int A[n1 + n2], B[n2];
	printf("Enter A element into Ascending order:\n");
	for (i = 0; i < n1; i++)
		scanf("%d", &A[i]);

	printf("Enter B elements into Descending order:\n");
	for (i = 0; i < n2; i++)
		scanf("%d", &B[i]);

	mergeArr(A, B, n1, n2);
	return 0;
}
