#include <stdio.h>
int main()
{
    int arr[] = {-1, 2, 3, -7, 12, -4, 0, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    int max_sum = -2147483648, sum = 0, start = 0, end = 0, temp = 0, i;
    for (i = 0; i < size; i++)
    {
        sum = sum + arr[i];
        if (sum >= max_sum)
        {
            max_sum = sum;
            start = temp;
            end = i;
        }
        if (sum < 0)
        {
            sum = 0;
            temp = i + 1;
        }
    }
    printf("sequential Subarray is :");
    for (i = start; i <= end; i++)
    {
        printf(" %d", arr[i]);
    }
    printf("\nLargest Sum is: %d\n", max_sum);
}
