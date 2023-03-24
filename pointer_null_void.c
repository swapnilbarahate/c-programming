#include<stdio.h>
#include<string.h>
int main()
{
    // void pointer
    //void pointer without typecast pointer distracting not posible
    int a =34;
    float b=76.60;
    char c[] ="swapnil";
    void *ptr;
    ptr=&a;
    printf("output of void pointetr is:%d\n",(*(int *)ptr));
    ptr=&b;
    printf("output of void pointetr is:%f\n",(*(float *)ptr));
    ptr=c;
    printf("output of void pointetr is:%s\n",((char *)ptr));

    //null pointer

    int x =34;
    int *ptr2;
    ptr=&a;
    printf("\nNULL pointer\n");
    printf("output of NULL pointetr is:%d\n",ptr);
    // ptr=&b;
    // printf("output of pointetr is:%f\n",(*(float *)ptr));
    // ptr=c;
    // printf("output of pointetr is:%s\n",((char *)ptr));

}