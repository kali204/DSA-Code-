#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *newnode,*temp,*head,*temp,*temp1;

void insertion(int x)
{ 
     newnode=(struct node*)malloc(sizeof(struct node));
     newnode->data=x;
     newnode->next=0;
     if(head==0)
     {
        head=temp=newnode;
     }
     else{
        temp->next=newnode;
        temp=newnode;
     }
}
void delete()
{
    temp1->next=temp->next;
    free(temp);
}
void search(int m)
{
    temp=head;
    while(temp->data!=m)
    {
        temp1=temp;
        temp=temp->next;
    }
    if(temp->data==m)
    {
        printf("\nElement founded\n");
        delete();
    }
    else{
        printf("Not found");
    }

}
void display1(struct node *temp)
{
    temp=head;
    printf("\nLinked list after deletion...\n");
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
}
void display(struct node *temp)
{
    temp=head;
    printf("\nLinked list...\n");
    while(temp->next!=0)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("%d",temp->data);
    printf("\n");
}
int main()
{
    head=0;
    int n;
    printf("Enter the limit of node:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        int x;
        printf("Enter the data:");
        scanf("%d",&x);
        insertion(x);
    }
    display(temp);
    int m;
    scanf("%d",&m);
    search(m);
    
    display1(temp);
    return 0;
}