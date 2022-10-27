// sum in linked list
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
    head = 0;
    int choice = 0, sum = 0;
    while (choice == 0)
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
        printf("Do you want to continue (0/1):");
        scanf("%d", &choice);
    }
    temp = head;
    while (temp != 0)
    {
        printf("%d", temp->data);
        sum += temp->data;
        temp = temp->next;
    }
    printf("/n sum=%d", sum);
    return 0;
}