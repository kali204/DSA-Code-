#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void CreateList(int n)
{
    struct node *newnode, *temp;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the node %d : ", i);
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
}
void reverse()
{
    struct node *nextnode, *prevnode, *currentnode;
    prevnode = 0;
    currentnode = nextnode = head;
    while (nextnode != 0)
    {
        nextnode = nextnode->next;
        currentnode->next = prevnode;
        prevnode = currentnode;
        currentnode = nextnode;
    }
    head = prevnode;
}
void display(struct node *temp)
{
    while (temp != 0)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *newnode, *temp;
    int n;
    printf("Enter the number of node:");
    scanf("%d", &n);
    CreateList(n);
    reverse();
    temp = head;
    printf("After reversing the linked list:");
    display(temp);
    return 0;
}