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
    printf("\n");
}
void delbeg()
{
    struct node *temp;
    temp = tail->next;
    tail->next = temp->next;
    temp->next = 0;
    free(temp);
}
void delatEnd()
{
    struct node *current, *previous;
    current = tail->next;
    if (tail == 0)
    {

        printf("Empty");
    }
    else if (current->next == current)
    {
        tail = 0;
        free(current);
    }
    else
    {
        while (current->next != tail->next)
        {
            previous = current;
            current = current->next;
        }
        previous->next = tail->next;
        tail = previous;
        free(current);
    }
}
void delefrompos(int n)
{
   struct node *current ,*temp;
   current=tail->next;
   int i=1,pos;
   printf("Enter the position:");
   scanf("%d",&pos);
   if(pos<1||pos>n){
    printf("Ivalid postion.");
   }
   else if(pos==1){
    delbeg();
   }
   else
   {
    while(i<pos-1) 
       {
        current=current->next;
        i++;
    }
    temp=current->next;
    current->next=temp->next;
    free(temp);
   }
}
int main()
{
    int n;
    printf("Enter the range of node:");
    scanf("%d", &n);
    createCLL(n);
    display();
   delbeg();
    display();
    delatEnd();
    display();
    delefrompos(n);
    display();

    return 0;
}