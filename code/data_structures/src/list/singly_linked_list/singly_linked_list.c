/*
 * C program to create a linked list and display the elements in the list
 * Part of Cosmos by OpenGenus Foundation
 */
#include <stdio.h>
#include <stdlib.h>
 
int main(void)
{
    struct node
    {
        int num;
        struct node *ptr;
    };
    typedef struct node NODE;
 
    NODE *head, *first, *temp = NULL;  // its good to assign NULL to pointers as compared to 0;
    int count = 0;
    int choice = 1;
    first = NULL;
    while (choice)
    {
        head  = (NODE *)malloc(sizeof(NODE));
        printf("Enter the data item\n");
        scanf("%d", &head-> num);
        if (first != NULL)
        {
            temp->ptr = head;
            temp = head;
        }
        else
        {
            first = temp = head;
        }
        fflush(stdin);
        printf("Do you want to continue(Type 0 or 1)?\n");
        scanf("%d", &choice);
    }
    temp->ptr = 0;
    temp = first;
    printf("\n status of the linked list is\n");
    while (temp != 0)
    {
        printf("%d=>", temp->num);
        count++;
        temp = temp -> ptr;
    }
    printf("NULL\n");
    printf("No. of nodes in the list = %d\n", count);
}
