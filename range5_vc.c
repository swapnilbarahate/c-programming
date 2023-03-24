#include <stdio.h>
int main()
{
    float num, reminder, ans;
    int temp;
    printf("Enter the Number: ");
    scanf("%f", &num);
    if (num <= 40)
    {
        temp = num / 5;
        reminder = num - (temp * 5);
        if (reminder <= 2.5)
        {
            if (temp == 0)
            {
                ans = 5;
            }
            else
            {
                ans = temp * 5;
            }
        }
        else
        {
            ans = (temp * 5) + 5;
        }
    }
    else
    {
        temp = num / 10;
        reminder = num - (temp * 10);
        if (reminder > 0)
        {
            ans = (temp * 10) + 10;
        }
        else
        {
            ans = temp * 10;
        }
    }
    printf("\nANS IS: %f", ans);
}