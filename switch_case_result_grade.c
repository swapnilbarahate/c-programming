#include<stdio.h>
int main()
{
    int mark;
    printf("Enter the student mark:");
    scanf("%d",&mark);

    switch(mark)
    {
        case 81 ... 100:
        printf("Student pass in Grade A");
        break;

        case 61 ... 80:
        printf("Student pass in Grade B");
        break;

        case 51 ... 60:
        printf("Student pass in Grade C");
        break;

        case 35 ... 50:
        printf("Student pass in Grade D");
        break;

        case 0 ... 34:
        printf("Fail");
        break;

        default:
        printf("Not valid input please enter valid input");
    }
}