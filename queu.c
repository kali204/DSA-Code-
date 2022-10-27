#include<stdio.h>
#include<stdlib.h>
int a[5],i;
int front=-1,rear=-1;
void enqueue()
{
    int n;
    printf("Enter the element");
    scanf("%d",&n);
    if(rear==4){
        printf("Queue overflow.");}
    else if(front ==-1 && rear==-1)
    {front = rear =0;
    a[rear]=n;
    }
    else{
        rear++;
        a[rear]=n;
    }
      
}
void display()
{
    
        for(int i=0;i<5;i++)
        {
            printf("%d ",a[i]);
        }
    
}
int dequeue()
{
    int item;
    if(front==-1 && rear ==-1)
    {
        printf("Empty");
    }
    else if(front==rear){
       front=rear=-1;
    }
    else{
        item=a[front];
        front++;
    }
    printf("%d\n",item);
    
}
int main()
{
    int x;
        while(1)
        {
        printf("\nEnter your choice \n1.enqueue\n2.dequeue\n3.display\n");
        scanf("%d",&x);
    switch (x)
    {
    case 1: for(int i=0;i<5;i++)
    {
    enqueue();  
    }
        break;
    case 2: dequeue(); 
      break;
         
    case 3: display();
      break;
    default: printf("Wrong choice..");
        break;
    }    
        }
}