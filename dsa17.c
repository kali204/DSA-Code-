// Creating circular linked list with tail pointer only...
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * tail, *newnode;
void createCLL(int n)
{
    tail = 0;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data %d: ", i);
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (tail == 0)
        {
            tail = newnode;
            tail->next = newnode;
        }
        else
        {
            newnode->next = tail->next;
            tail->next = newnode;
            tail = newnode;
        }
    }
}
void display()
{
    struct node *temp;
    if (tail == 0)
    {
        printf("Empty node.");
    }
    else
    {
        temp = tail->next;
        while (temp->next != tail->next)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }

        printf("%d", temp->data);
    }
}
int main()
{
    int n;
    printf("Enter the node range: ");
    scanf("%d", &n);
    createCLL(n);
    display();
}