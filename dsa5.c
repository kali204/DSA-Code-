// Insertion in linked list at beginning
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode, *temp;
    int n;
    head = 0;
    printf("Enter the number of nodes:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the node %d:", i);
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
    }
    temp = head;
    while (temp != 0)
    {

        printf("%d\n", temp->data);
        temp = temp->next;
    }
    printf("\nInsertion on new node.\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the element you want to insert:");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    temp = head;
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }

    return 0;
}