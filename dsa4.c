// Program for linkedlist
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
void linkedlistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element of linked list %d\n", ptr->data);
        printf("Address of element of linked list %d\n", &ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    // linking head to second node
    head->data = 5;
    head->next = second;
    second->data = 7;
    second->next = third;
    third->data = 6;
    third->next = NULL;

    linkedlistTraversal(head);
    return 0;
}
