//First way
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     printf("***print non-reapeating character in String***\n");
//     int i,len,position;
//     char a[200];
//     int b[26]={0};
//     printf("Enter any string:\n");
//     scanf("%[^\n]s",a);
//     len= strlen(a);
//     for(i=0;i<len;i++)
//     {
//         if(a[i]>=65 && a[i]<=90)
//         {
//             position = a[i]-65;
//             b[position] = b[position]+1;
//         }
//         else if(a[i]>=97 && a[i]<=122)
//         {
//             position = a[i]-97;
//             b[position] = b[position]+1;
//         }
//     } 
//     printf("\nnon-repeating character is:\n"); 
//     for(i=0;i<26;i++)
//     {
//         if(b[i]==1)
//         {
//             printf("%c ",i+97);
//         } 
//     }
// }


//second way
#include<stdio.h>
#include<string.h>
void main()
{
    printf("***print non-reapeating character in String***\n");
    int i,len,position;
    char a[200];
    int b[26]={0};
    printf("Enter any string:\n");
    scanf("%[^\n]s",a);
    len= strlen(a);
    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            position = a[i]-65;
            b[position] = b[position]+1;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            position = a[i]-97;
            b[position] = b[position]+1;
        }
    } 
    printf("non-repeating character is:\n"); 
    for(i=0;i<len;i++)
    {
        if(a[i]>=65 && a[i]<=90)
        {
            position = a[i]-65;
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            position = a[i]-97;
        }
        if(b[position]==1)
        {
            printf("%c = %d\n",position+97,b[position]);
            position=26;
        } 
    }
}