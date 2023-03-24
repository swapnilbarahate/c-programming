#include<stdio.h>
char string_word_reverse();
int main()
{
    char str[1000];
    printf("************** word charcter reverse in given string *******************\n");
    printf("Enter the string:\n");
    //scanf("%[^\n]s",&str);//user input ghenyasathi
    gets(str);//user string input ghenyasathi
    //i/p- swapnil shivaji barahate
    //o/p- linpaws ijavihs reaharba

    string_word_reverse(str);

    printf("\n%s",str);

}

char string_word_reverse(char *str)
{
    int i=0,j,stop,length=0;
    char temp;
    while(str[i]!='\0')
    {
        length++;
        i++;
    }
    i=0,stop=0;
    while(i<length)
    {
        if(str[i]==' ' && i!=length-1)
        {
            j=stop;
            while(j<(i-1)/2)
            {
                temp = str[j];
                str[j]= str[i-1-j];
                str[i-1-j]= temp;
                j++;
            }
            stop=i+1;
        }
        else if(i==length-1)
        {
            j=stop;
            while(j<=i/2)
            {
                temp = str[j];
                str[j]= str[i-j];
                str[i-j]= temp;
                j++;
            }
        }
        i++;
    }
   
    return *str;
}