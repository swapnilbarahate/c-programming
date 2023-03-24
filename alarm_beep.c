#include<stdio.h>
int main()
{
    int num;
    input:
    printf("For day press(1 to 7) & press 8 for Exit:");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
            printf("Sunday\n");
            goto input;
            //break;
        case 2:
            printf("Monday\n");
            goto input;
            //break;
        case 3:
            printf("Tusday\n");
            goto input;
            //break;
        case 4:
            printf("Wensday\n");
            goto input;
            //break;
        case 5:
            printf("Thusday\n");
            goto input;
            //break;
        case 6:
            printf("Friday\n");
            goto input;
            //break;
        case 7:
            printf("Saturday\n");
            goto input;
            //break;
        case 8:
            break;
        default:
        printf("\a please Enter valid Number\n");
        goto input;
    }
}