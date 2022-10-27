#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * tail;
void createCLL(int n)
{
    struct node *newnode;
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

        printf("%d\n", temp->data);
    }
}
void insertatbeg()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
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
    }
       
}
void insertatend()
{
    
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next=tail->next;
        tail->next=newnode;
        tail=newnode;
    }
       
}
void insertatpos()
{
    int pos,i=0;
    printf("Enter the position:");
    scanf("%d",&pos);
    struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &newnode->data);
    newnode->next = 0;
    temp=tail;
    while(pos>i)
    {
       temp=temp->next;
       i++;
    }
    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next=temp->next;
        temp->next=newnode;
    }
}
int main()
{
    int n;
    printf("Enter the range of node:");
    scanf("%d", &n);
    createCLL(n);
    display();
    insertatbeg();
    display();
    insertatend();
    display();
    insertatpos();
    display();

    return 0;

}