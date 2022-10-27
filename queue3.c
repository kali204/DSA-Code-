#include<stdio.h>
#include<stdlib.h>
#define maxsize 50
int r=-1,f=-1;
int que[maxsize];
void insert()
{
    int x;
    printf("enter");
    scanf("%d",&x);
    if(r=maxsize-1);
    {
        exit(0);
    }
    if(f==-1 && r==-1)
    {
        f=r=0;
        que[r]=x;
    }
    else
    {
        que[r]=x;
        r++;
    }
}
void display()
{
    if(r==-1)
    {
        printf("empty list");
    }
    else
    {
        for(int i=f;f<=r;i++)12
        {
            printf("%d",que[i]);
        }
    }
}
int main()
{
    insert();
    display();
    return 0;
}