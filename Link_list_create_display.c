#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <process.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void create();
void display();
void main()
{
    int choice = 0;
    while (choice != 3)
    {
        printf("\n*********Link List*********\n");
        printf("Option:\n");
        printf("1.Create and Add:\n2.Display\n3.Exit\n");
        printf("\nEnter option no to choice?\n");
        scanf("\n%d", &choice);
        switch (choice)
        {
        case 1:
            create();
            break;
        case 2:
            display();
            break;
        case 3:
            exit(0);
            break;
        default:
            printf("Please enter valid choice..");
        }
    }
}
void create()
{
    struct node *ptr, *temp;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter value?\n");
    scanf("%d", &item);
    ptr->data = item;
    if (head == NULL)
    {
        ptr->next = NULL;
        head = ptr;
        printf("Value inserted");
    }
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
        ptr->next = NULL;
        printf("Value inserted");
    }
}

void display()
{
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("List is Empty");
    }
    else
    {
        printf("\nLink list value is:");
        while (ptr != NULL)
        {
            printf("\n%d", ptr->data);
            ptr = ptr->next;
        }
    }
}