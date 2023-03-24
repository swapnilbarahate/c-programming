//Fist way Logic 
#include<stdio.h>
#include<string.h>
void main()
{
    printf("**** Anagram string ***\n");
    int i,j,flag=1,temp;
    char a[100], b[100];
    printf("Enter the first string:");
    // gets(a);
    scanf("%[^\n]%*c",a);
    printf("\nEnter the second string:");
    scanf("%[^\n]%*c",b);
    // gets(b);
    if(strlen(a)==strlen(b))
    {
        for(i=0;i<strlen(a);i++)
        {
            (a[i]>=65 && a[i]<=90)?(a[i]=a[i]+32):a[i];
            for(j=i;j<strlen(b);j++)
            {
                (b[j]>=65 && b[j]<=90)?(b[j]=b[j]+32):b[j];
                if(a[i]==b[j])
                {
                    temp=b[i];
                    b[i]=b[j];
                    b[j]=temp;
                }
            }
        }
        for(i=0;i<strlen(a);i++)
        {
            if(a[i]==b[i])
            {
                flag=0;
            }
            else{
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
    {
        printf("\nAnagram");
    }
    else
    {
        printf("Not anagram");
    }
    // shubham baban pawar
}

//second way logic using assci value
// #include<stdio.h>
// #include<string.h>
// void main()
// {
//     printf("****validation of string Anagram***\n");
//     int i,str1=0,str2=0,flag=1;
//     char a[100], b[100];
//     printf("Enter the first string:");
//     gets(a);
//     printf("\nEnter the second string:");
//     gets(b);
//     if(strlen(a)==strlen(b))
//     {
//         for(i=0;i<strlen(a);i++)
//         {
//             (a[i]>=65 && a[i]<=90)?( a[i] = a[i]+32 ):a[i];//upper to lower convesion
//             (b[i]>=65 && b[i]<=90)?( b[i] = b[i]+32 ):b[i];
//             // (a[i]<97||a[i]>122)? a[i]=0: a[i];  //space and other symbol ignore
//             // (b[i]<97||b[i]>122)? b[i]=0: b[i];
//             str1 = str1 + a[i];
//             str2 = str2 + b[i];
//             flag = 1;
//         }
//         if(str1==str2)
//         {
//             flag=0;
//         }
//     }
//     if(flag==0)
//     {
//         printf("\nAnagram");
//     }
//     else
//     {
//         printf("Not anagram");
//     }
// }
