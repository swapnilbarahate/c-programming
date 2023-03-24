//First logic
// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     int i = 0, j, t, temp, n;
//     char a[100];
//     printf("***string revers but ony first word is last ans last word in first position***\n");
//     printf("Enter any string:\n");
//     scanf("%[^\n]s", a);
//     n = strlen(a);
//     char b[n];
//     j = n - 1;
//     temp = n;

//     while (j >=0)
//     {
//         if (a[j]==' ' && j!=0)
//         {
//             t = j + 1;
//             while (t < temp)
//             {
//                 b[i] = a[t];
//                 t++;
//                 i++;
//             }
//             b[i] = a[j];
//             i++;
//             temp = j;
//         }
//         else if (j == 0)
//         {
//             t = j;
//             while (t<temp)
//             {
//                 b[i] = a[t];
//                 t++;
//                 i++;
//             }
//         }
//         j--;
//     }
//     printf("%s",b);
//     printf("\nLength:%d",strlen(b));
// }


//second logic
#include <stdio.h>
#include <string.h>
int main()
{
    int j, i, temp;
    char a[100];
    //i/p-swapnil shivaji barahate
    //o/p-barahate shivaji swapnil
    //or
    //o/p-sonali swapnil shivaji barahate
    //o/p-barahate shivaji swapnil sonali    
    printf("***string revers but ony first word is last ans last word in first position***\n");
    printf("Enter any string:\n");
    scanf("%[^\n]s", a);
    j = strlen(a)- 1;
    temp = strlen(a);
    while (j >= 0)
    {
        if (a[j]==' ' && j!=0)
        {
            i = j + 1;
            while (i < temp)
            {
                printf("%c",a[i]);
                i++;
            }
            printf("%c",a[i]);
            temp = j;
        }
        else if ( j == 0)
        {
            i = j;
            while (i<temp)
            {
                printf("%c",a[i]);
                i++;
            }
        }
        j--;
    }
}