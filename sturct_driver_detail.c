/* you manage the travel agence and you want n / theree driver to their following details
1.Drever licen no
2.Rout
3.Km
driver input take one by one
print driver details in beuatiful fashion */

#include<stdio.h>
#include<string.h>
struct Driver
{
    char name[40];
    char dlno[40];
    char rout[40];
    int kms;
};
int main()
{
    struct Driver d1,d2,d3;
    printf("Enter Travel agence drver details\n");
    printf("Enter the first driver\n");
    printf("Name:");
    scanf("%s",&d1.name);
    printf("\nDriving licen no:");
    scanf("%s",&d1.dlno);
    printf("\nRout:");
    scanf("%s",&d1.rout);
    printf("\nKilometer:");
    scanf("%d",&d1.kms);
    printf("\nEnter the Second driver\n");
    printf("Name:");
    scanf("%s",&d2.name);
    printf("\nDriving licen no:");
    scanf("%s",&d2.dlno);
    printf("\nRout:");
    scanf("%s",&d2.rout);
    printf("\nKilometer:");
    scanf("%d",&d2.kms);
    printf("\nEnter the Third driver\n");
    printf("Name:");
    scanf("%s",&d3.name);
    printf("\nDriving licen no:");
    scanf("%s",&d3.dlno);
    printf("\nRout:");
    scanf("%s",&d3.rout);
    printf("\nKilometer:");
    scanf("%d",&d3.kms);

    printf("****** Driver Details *********\n");
    printf("First Driver details is\n");
    printf("Name: %s\n",d1.name);
    printf("Dlno: %s\n",d1.dlno);
    printf("Rout: %s\n",d1.rout);
    printf("Kilometers: %d\n",d1.kms);

    printf("\nSecond Driver details is\n");
    printf("Name: %s\n",d2.name);
    printf("Dlno: %s\n",d2.dlno);
    printf("Rout: %s\n",d2.rout);
    printf("Kilometers: %d\n",d2.kms);

    printf("\nThird Driver details is\n");
    printf("Name: %s\n",d3.name);
    printf("Dlno: %s\n",d3.dlno);
    printf("Rout: %s\n",d3.rout);
    printf("Kilometers: %d\n",d3.kms);
}