#include <stdio.h>
#include <string.h>
//i/p- swapnil shivaji barahate
//o/p- etahara bijavih slinpaws
etahara bijavih slinpaws int main()
{

    int len, i = 0, t = 0;
    char str[100];
    printf("***string revers but do not change space position***\n");
    printf("Enter any string:\n");
    //gets(a);
    scanf("%[^\n]s", str);
    // printf("i/p:%s",str);
    len = strlen(str);
    int j = len - 1;
    char arr[100];
    // printf("\n");
    while (i < len)
    {
        if (str[i] == ' ')
        {
            arr[t] = str[i];
            t++;
        }
        if (str[j] != ' ')
        {
            arr[t] = str[j];
            t++;
        }
        i++;
        j--;
    }
    printf("\n%s", arr);
}
