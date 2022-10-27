#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;

} * head, *newnode, *temp;
void createCLL(int n)
{
    head = 0;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data %d :", i);
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
        temp->next = head;
    }
}
void display()
{
    if (head == 0)
    {
        printf("Empty");
    }
    else
    {
        temp = head;
        while (temp->next != head)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("%d", temp->data);
    }
}
int main()
{
    int n;
    printf("Enter the number of node");
    scanf("%d", &n);
    createCLL(n);
    display();
}