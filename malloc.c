#include<stdio.h>
#include<stdlib.h>
int main()
{
    /*one compay have multiple employ create three employ id asc hou many character in empid and save the empid in pointer */
    int charecter,i=0;
    char *ptr;
    while(i<3) 
    {
        printf("Enter how many character in emplye id:\n");
        scanf("%d",&charecter);
        getchar();
        ptr = (char *) malloc ((charecter+1)*sizeof(char));
        printf("Enter Employ Id:\n");
        scanf("%s",ptr);
        getchar();
        printf("\nYour employee id is:%s\n",ptr);
        free(ptr);
        printf("\nYour employee id is:%s\n",ptr);
        i=i+1;
    }
}