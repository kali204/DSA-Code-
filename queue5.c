#include<stdio.h>
#include<stdlib.h>
#define N 5
int queue[N];
int front=-1,rear=-1;

void enqueue(int x)
{
   if(front==-1&&rear==-1)
   {
    front=rear=0;
    queue[rear]=x;
   }
   else if((rear+1)%N==front)
   {
    printf("\nQueue is full.\n");
   }
   else 
   {
    rear=(rear+1)%N;
    queue[rear]=x;
   }
}
void display()
{
    int i=front;
    if(front==-1&&rear==-1)
    {
        printf("Queue is empty");
    }
    else 
    {
        printf("Queue is :");
        while(i!=rear)
        {
         printf("%d",queue[i]);
         i=(i+1)%N;
        }
    }
}
void dequeue()
{
    if(front==-1&rear==-1)
    {
        printf("Queue is empty");
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else{
        printf("%d",queue[front]);
        front=(front+1)%N;
    }
}
int main()
{
    int ch,j=1,x,n=N;
    while(1)
    {
        printf("\nEnter you choice \n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:while(n!=0)
        {
            printf("Enter %d element:",j);
            scanf("%d",&x);
            enqueue(x);
            n--;
            j++;
        }
            break;
        case 2: dequeue();
        break;
        case 3: display();
        break;
        case 4: exit(0);
        break;
        default:printf("Incorrect choice.");
            break;
        }
    }
    return 0;

}