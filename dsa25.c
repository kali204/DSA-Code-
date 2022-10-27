#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *temp, *head, *newnode;
int main()
{
    int i, n;
    head = 0;
    printf("Enter the number of node.");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data:");
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
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\nInsertion at front\n");
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    temp = head;
    while (temp != 0)
    {
        /* code */
        printf("%d", temp->data);
        temp = temp->next;
    }
    return 0;
}