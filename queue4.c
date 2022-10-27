//Queue implementation using stack 
#include<stdio.h>
#include<stdlib.h>
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;
int pop1()
{
    return s1[top1];
    top1--;

}
int pop2()
{
    return s2[top2];
    top2--;
}
void push1(int x)
{
    if(top1==N-1)
    {
        printf("Queue is full");
    }
    else
    {
       top1++;
       s1[top1]=x;
    }
} 
void enqueue(int x)
{
   push1(x);
   count++;
}
void push2(int a)
{
    if(top2==N-1)
    {
        printf("Queue is full");
    }
    else
    {
       top2++;
       s2[top2]=a;
    }
} 
void dequeue()
{
    if(top1==-1&&top2==-1)
    {
        printf("Queue is empty");
    }
    for(int i=0;i<count;i++)
    {
        int a=pop1();
        push2(a);
    }
   int b=pop2();
    printf("%d",b);
    count--;
    for(int i=0;i<count;i++)
    {
        int a=pop2();
        push1(a);
    }
}
void display()
{
    for(int j=0;j<=top1;j++)
    {
        printf("%d",s1[j]);
    }
}
int main()
{
    int ch,x;
    while(1)
        {
        printf("\nEnter your choice \n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
        scanf("%d",&ch);
    switch (ch)
    {
    case 1: for(int i=1;i<=5;i++)
    {
        printf("Enter you element %d : ",i);
        scanf("%d",&x);
        enqueue(x);  
    }
        break;
    case 2: dequeue(); 
      break;
         
    case 3: display();
      break;
    case 4: exit(0);
      break;
    default: printf("Wrong choice..");
        break;
    }    
        }

    return 0;
}