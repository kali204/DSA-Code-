#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * head;
void createlist(int n)
{
    struct node *newnode, *temp;
    head = 0;
    for (int i = 1; i <= n; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter the node %d:", i);
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
    }
}
void display(struct node *temp)
{
    
    while (temp != 0)
    {

        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    struct node *newnode, *temp;
    int n;
    printf("Enter the number of node required:");
    scanf("%d", &n);

    createlist(n); // Function for creating list......

    temp = head;
    // Display list ...
    display(temp);

    return 0;
}