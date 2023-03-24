//first logic
// #include <stdio.h>
// int a = 9, b = 11, c;
// int main()
// {
//     c = a;
//     a = b;
//     b = c;
//     c = 0;
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
//     printf("c = %d", c);
   
//     printf("a = %d\n", a);
//     printf("b = %d\n", b);
// }

#include <stdio.h>
int a ='A', b = 'B';
int main()
{
    a = b+a;
    b = a-b;
    a = a-b;
    printf("a = %c\n", a);
    printf("b = %c\n", b);
}