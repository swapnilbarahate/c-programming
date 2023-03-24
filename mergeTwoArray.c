#include <stdio.h>
int concat();
void mergeSort();
void merge();
int main()
{
    int n1, n2;
    printf("Enter the number of elements in First_array: ");
    scanf("%d", &n1);
    int a[n1];
    printf("Enter the elements : ");
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number of elements in Second_array: ");
    scanf("%d", &n2);
    int b[n2];
    printf("Enter the elements : ");

    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &b[i]);
    }

    concat(a, b, n1, n2);
    mergeSort(a, 0, (n1 + n2) - 1);
    printf("Merge array is:");
    for (int i = 0; i < (n1 + n2); i++)
    {
        printf(" %d,", a[i]);
    }
    return 0;
}
int concat(int *p, int *q, int n1, int n2)
{
    int i, j;
    for (i = 0, j = n1; i < n2; i++, j++)
    {
        *(p + j) = *(q + i);
    }
}

void merge(int arr[], int l, int m, int r)
{
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}
