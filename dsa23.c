#include<stdio.h>
#include<stdlib.h>
void insertion(int a[])
{
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element",i);
        scanf("%d",&a[i]);
    }
}
void del(int a[])
{
    int n,temp;
    printf("enter the index:");
    scanf("%d",&n);
    temp=a[n];
}
void display(int a[])
{
   for(int i=0;i<size;i++)
   {
    printf("%d",a[i]);
   }
}
int main()
{
    int a[50],size;
    printf("Enter the size of array");
    scanf("%d",&size);
    if(size==50)
    {
        printf("Overflow");
    }
    while(1)
    {
    insertion(a);
    del(a);
    display(a);
    }
}