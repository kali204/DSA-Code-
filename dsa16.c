#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head, *newnode, *tail;
void createCLL(int n)
{
    head = 0;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data %d:", i);
        scanf("%d", &newnode->data);
        newnode->next = 0;
        if (head == 0)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            tail = newnode;
        }
        tail->next = head;
    }
}
void display()
{
    tail = head;
    while (tail->next != head)
    {
        printf("%d", tail->data);
        tail = tail->next;
    }
    printf("%d", tail->data);
}
int main()
{
    int n;
    printf("Enter the range of node: ");
    scanf("%d", &n);
    createCLL(n);
    display();
    return 0;
}