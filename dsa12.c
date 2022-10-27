// Insertion in doubly linked list.....
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} * head, *temp, *newnode;
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
void Insertbeg()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data U want: ");
    scanf("%d", &newnode->data);
    newnode->next = head;
    newnode->prev = 0;
    head = newnode;
}
void InsertEnd()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the data U want: ");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp = head;
    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp->next;
}
void Insertpos(int n)
{
    int pos, i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > n)
    {
        printf("Invalid Postion.");
    }
    else if (pos == 1)
    {
        Insertbeg();
    }
    else
    {
        temp = head;
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter the data");
        scanf("%d", &newnode->data);
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}
void Insertafterpos(int n)
{
    int pos, i = 1;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the position: ");
    scanf("%d", &pos);
    if (pos > n)
    {
        printf("Invalid Postion.");
    }
    else
    {
        temp = head;
        while (i < pos + 1)
        {
            temp = temp->next;
            i++;
        }
        printf("Enter the data");
        scanf("%d", &newnode->data);
        newnode->prev = temp;
        newnode->next = temp->next;
        temp->next = newnode;
        newnode->next->prev = newnode;
    }
}
int main()
{
    int n;
    printf("Enter the number of nodes required: ");
    scanf("%d", &n);
    createlist(n);
    temp = head;
    display(temp);
    // Insertion in beigning ..
    Insertbeg();
    temp = head;
    display(temp);
    // Insertion at End ...
    InsertEnd();
    temp = head;
    display(temp);
    // Insertion  at given position ...
    Insertpos(n);
    temp = head;
    display(temp);
    // Insertion after position ....
    Insertafterpos(n);
    temp = head;
    display(temp);

    return 0;
}
