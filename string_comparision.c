#include<stdio.h>
//#include<string.h>
int main()
{
  int a_len=0,b_len=0;
  int i=0,flag=0;
  char a[20],b[20];
  int c[3]={1,2,3};
  printf("%d\n",c[2]);
  printf("Enter the First String:");
  scanf("%s",&a);

  printf("Enter the Second String:");
  scanf("%s",&b);
  while(a[a_len]!='\0')
  {
    a_len++;
  }
  printf("\n%s String Length is :%d",a,a_len);
  while(b[b_len]!='\0')
  {
    b_len++;
  }
   printf("\n%s String Length is :%d",b,b_len);
  if(a_len==b_len)
  {
    
    while(i!=a_len
    {
'[      if(a[i]==b[i])
]'      {
        printf("%c",a[i]);
        i++;
      }
      else{
        printf("{%c}",a[i]);
        flag=1;
        break;
      }
    }
    //printf("\n%s and %s string length is same  %d = %d",a,b,a_len,b_len);

  }
  else{
    //printf("\n%s and %s  Sring length is differnt %d != %d",a,b,a_len,b_len);
    flag=1;
  }
  if(flag==1)
  {
    printf("\n False");
  }
  else
  {
    printf("\n True");
  }

}
