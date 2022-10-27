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
}
int main()
{
    int n;
    printf("Enter the number of nodes required: ");
    scanf("%d", &n);
    createlist(n);
    temp = head;
    display(temp);
    return 0;
}
