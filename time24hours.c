#include <stdio.h>
#include <stdlib.h>
char *timeConversion(char *s)
{
    int len = 0;
    while (s[len] != '\0')
    {
        len++;
    }

    char *string2 = malloc(sizeof(char) * len);
    for (int i = 0; i < len - 2; i++)
    {
        string2[i] = s[i];
    }

    if (s[8] == 'A' || s[8] == 'a')
    {
        if (s[0] == '1' && s[1] == '2')
        {
            string2[0] = '0';
            string2[1] = '0';
        }
    }
    else
    {
        int ans = s[0] - 48;
        ans = (ans * 10) + (s[1] - 48);
        if (ans < 12)
        {
            ans = ans + 12;
            string2[1] = (ans % 10) + 48;
            ans = ans / 10;
            string2[0] = (ans % 10) + 48;
        }
    }
    return string2;
}

int main()
{

    char *s = malloc(sizeof(char) * 10);
    printf("%s\n",s);
    printf("Enter for this format =>");
    gets(s);
    char *result = timeConversion(s);
    printf("%s\n", result);

    return 0;
}