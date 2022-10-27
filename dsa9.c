//
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
    for (int i = 1; i <=n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the node %d: ", i);
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
void Length()
{
    struct node *temp;
    int count=0;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    printf("Length of Linked list %d.",count);
}
int main()
{
    struct node *temp, *newnode;
    int n;
    printf("Enter number of node:");
    scanf("%d", &n);
    CreateList(n);
    // Length of lisnked list
    Length();
    return 0;
}