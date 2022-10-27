#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *temp;
void createlist(int n)
{
    struct node *newnode;
    head = 0;
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
}
void display(struct node *temp)
{

    while (temp != 0)
    {

        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
void DeleteFromBeg()
{
    struct node *p;
    p = head;
    head = head->next;
    free(p);
}
void DeleteFromEnd()
{
    struct node *n1;
    temp = head;
    while (temp->next != 0)
    {
        n1 = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        n1->next = 0;
    }
    free(temp);
}
void DeleteFromPos()
{
    struct node *nextnode;
    int pos, i = 1;
    temp = head;
    printf("Enter the postion:");
    scanf("%d", &pos);
    while (i > pos - 1)
    {
        temp = temp->next;
        i++;
    }
    nextnode = temp->next;
    temp->next = nextnode->next;
    free(nextnode);
}
int main()
{
    struct node *newnode;
    int n;
    printf("Enter the number of node required:");
    scanf("%d", &n);

    createlist(n); // Function for creating list......

    temp = head;
    // Display list ...
    display(temp);
    // Deleting from begining .....
    DeleteFromBeg();
    // Printing deleted list....
    temp = head;
    printf("\n");
    display(temp);
    // Deleteing from end....
    DeleteFromEnd();
    temp = head;
    printf("\n");
    // Display list after deleting end node.....
    display(temp);
    // deleting from position....
    DeleteFromPos();
    temp = head;
    printf("\n");
    display(temp);

    return 0;
}