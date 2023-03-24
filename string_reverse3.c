#include<stdio.h>
#include<string.h>
//i/p- swapnil shivaji barahate
//o/p- linpaws ijavihs etaharab
int main()
{
    printf("***word charecter revese but do not change word position***\n");  
    int i,min=0,max;
    char a[100];
    printf("Enter any string:\n");
    scanf("%[^\n]s",a);
    for(i=0;i<strlen(a);i++) 
    {
        if(a[i]==' '|| i==strlen(a)-1)
        {
            (i==strlen(a)-1)? max = i: max = i-1;
            // if(i==strlen(a)-1)
            // {
            //     max = i;
            // }
            // else{
            //     max = i-1;
            // }
            while(max>=min)
            {
                printf("%c",a[max]);
                max--;
            }
            min=i+1;
            if(i!=strlen(a)-1)
            {
              printf("%c",a[i]);
            }
        }
    }      
}
