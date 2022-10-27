#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

void push(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = top;
    top = newnode;
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
        printf("list is empty");
    else
        while (temp != 0)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
    printf("\n");
}
void peek()
{
    if (top == 0)
        printf("Stack is empty");
    else
        printf("Top element is %d\n", top->data);
}
void pop()
{
    struct node *temp;
    temp = top;
    if (top == 0)
        printf("stack is empty");
    else
        printf("%d", top->data);
    top = temp->next;
    free(temp);
}

int main()
{
    int N, x, ch;
    printf("Enter the limit of stack:");
    scanf("%d", &N);
    int i = N, j = 1;
    while (1)
    {
        printf("Enter the your choice \n1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            while (i != 0)
            {
                printf("Enter the element %d :", j);
                scanf("%d", &x);
                push(x);
                i--;
                j++;
            }
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        case 5:
            exit(0);
            break;
        default:
            printf("Enter the correct choice");
            break;
        }
    }
    return 0;
}