#include<stdio.h>
#include<string.h>
int main()
{
    printf("*****string rever in alter native word*****");
    //i/p-swapnil shivaji barahate
    //o/p-swapnil ijavihs barahate
    //
    //i/p-swapnil shivaji genu barahate
    //o/p-swapnil ijavihs genu etaharab

    char string[100];
    int changer;
    int i=0,j,temp1,temp2;
    printf("\n Enter the string:\n");
    scanf("%[^\n]s",string);
    printf("\n%s",string);
    while(string[i]!='\0')
    {
        
        if(string[i]==' ' && string[i+1]!=' ' && string[i+1]!='\0')
        {
            j=i+1;
            while(string[j]!=' ' || string[j]!='\0')
            {
               
                if(string[j+1]==' ' || string[j+1]=='\0')
                {
                    temp1=i+1;temp2=j;
                    while(temp1!=temp2)
                    {
                        printf("%c",string[temp1]);
                        changer = string[temp1];
                        string[temp1]=string[temp2];
                        string[temp2]=changer;
                        temp1++;
                        temp2--;
                    }

                } 
                j++; 
            }
            i=j+1;
        }
        i++;
    }
    printf("\n%s",string);
}
