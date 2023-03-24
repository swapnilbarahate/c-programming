#include<stdio.h>
#include<string.h>
#include<math.h>
int i,j,row,col,n;
void add();
int create_matrix(int row, int col){
    printf("Enter matrix value:\n");
    int** matrix[col][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
          printf("Enter in position i%d j%d:",i,j);
          scanf("%d",&matrix[i][j]);
        }
    }
    return matrix;
}
int main()
{
    int i,j,row,col,n;
    printf("**** Two dimensional array *******\n");
    printf("**** Addition of two matrix arry *******\n");

    printf("Enter matrix size:");
    scanf("%d",&row);
    printf("\nEnter matrix size:");
    scanf("%d",&col);

    printf("Enter the First A matrix value:\n");
    int *;
     a = create_matrix(row,col);//call to create matrix
    printf("Enter the Second B matrix value:\n");
    int *b;
    b = create_matrix(row,col);//call to create matrix

    printf("Enter the Second B matrix value:\n");

    printf("\n************ Addition of two matrix is belwo ***************\n");

}


// void add()
// {
//     for(i=1;i<=n;i++)
//     {
//         for(j=1;j<=n;j++)
//         {
//             int ans=a[i][j]+b[i][j];
//             if(j==n)
//             {
//                 printf("%d",ans);
//             }
//             else
//             {
//                 if(ans<10)
//                 {
//                     printf("%d    ",ans);
//                 }
//                 else if(ans>9 && ans<100)
//                 {
//                     printf("%d   ",ans);
//                 }
//                 else if(ans>99 && ans<999)
//                 {
//                     printf("%d  ",ans);
//                 }
//                 else{
//                     printf("%d ",ans);
//                 }
//             }
//         }
//         if(j==n+1)
//         {
//             printf("\n");
//         }
//     }
// }