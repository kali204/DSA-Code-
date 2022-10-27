#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front =0;
struct node *rear =0;
void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=x;
    newnode->next=0;
}
void display()
{
    struct node *temp;
    if(front==0 && rear==0)
    {
        printf("Empty");
    }
    else 
    {
        temp=front;
        while(temp!=0)
        {
            printf("%d",temp->data);
            temp=temp->next;
        }
    }
}
int main()
{
    int x;
    scanf("%d",&x);
   enqueue(x);
   display();
}