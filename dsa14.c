#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} * head, *temp, *newnode, *tail;
void createlist(int n)
{

    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data %d : ", i);
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;
        if (head == 0)
        {
            /* code */
            head = temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
        tail = temp;
    }
}
void display(struct node *temp)
{
    while (temp != 0)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void reverseDLL()
{
    struct node *current, *nextnode;
    current = head;
    while (current != 0)
    {
        nextnode = current->next;
        current->next = current->prev;
        current->prev = nextnode;
        current = nextnode;
    }
    current = head;
    head = tail;
    tail = current;
}
int main()
{
    int n;
    printf("enter the number of node:");
    scanf("%d", &n);
    createlist(n);
    temp = head;
    display(temp);
    reverseDLL();
    temp = head;
    display(temp);
    return 0;
}