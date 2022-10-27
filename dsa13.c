#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head, *temp, *newnode, *tail;
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
        tail=temp;
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
void delfrombeg(){
    if(head==0){
        printf("List is empty");
    }
    else{
    temp=head;
    head=head->next;
    head->prev=0;
    free(temp);
    }
}
void delfromend(){
    if(tail==0){
        printf("List is empty.");
    }
    else{
        temp=tail;
        tail->prev->next=0;
        tail=tail->prev;
        free(temp);
    }
}
void delfrompos(){
    int pos ,i=1;
    printf("Enter the position: ");
    scanf("%d",&pos);
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    free(temp);

}
int main(){
 int n;
    printf("Enter the number of nodes required: ");
    scanf("%d", &n);
    createlist(n);
    temp=head;
    display(temp);
    delfrombeg();
    temp=head;
    display(temp);
    delfromend();
    temp=head;
    display(temp);
    delfrompos();
    temp=head;
    display(temp);

}