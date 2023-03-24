#include <stdio.h>  
int *getarray(int*a);
int main()  
{  
  int *n;  
  int a[5];  
  n=getarray(a);  
  printf("\nElements of array are :");  
  for(int i=0;i<5;i++)  
    {  
        printf("%d", n[i]);  
    }  
    return 0;  
}  
int *getarray(int *a)  
{  
    
    printf("Enter the elements in an array : ");  
    for(int i=0;i<5;i++)  
    {  
        scanf("%d", &a[i]);  
    }  
    return a;  
} 