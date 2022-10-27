//Write a Menu-Driven Program for PUSH and POP in a Stack.
#include<stdio.h>
#include<stdlib.h>
#define N 5
int stack[N];
int top=-1;
void push()
{
    int x;
    printf("enter the element:");
    scanf("%d",&x);
    if(top==N-1)
    {
        printf("Overloaded");
    }
    else{
        top++;
        stack[top]=x;
    }
}
void pop()
{
    int item;
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
       
            stack[top]=item;
            top--;
    
    }
}
void display()
{
    
    for(int i=top;i>=0;i--)
    {
        printf("%d",stack[i]);
    }
}
int main()
{
    int ch;
    while(1)
    {
        printf("\nEnter your choice : \n1.push\n2.pop\n3.display\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1: push();
            break;
        case 2:pop();
            break;
        case 3:display();
            break;   
        default:printf("enter correct choice");
            break;
        }
    }
}