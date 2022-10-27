//Write a Menu-Driven Program for Insertion and Deletion in an Array.
#include <stdio.h>
#include<stdlib.h>
 int a[50], n,pos,num,ch;
void insertion()
{
    printf("Enter the position to insert new element : ");
    scanf("%d",&pos);
    
    printf("Enter the element need to inserted : ");
    scanf("%d",&num);

    for(int i=n-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    n++;
}
void deletion()
{
     printf("Enter the position to delete: ");
    scanf("%d",&pos);
    for(int i=pos-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;

}
void display()
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
       printf("Enter the size of index: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Index[%d]", i);
        scanf("%d",&a[i]);
    }
    while(1)
    {
        printf("Enter your choice :\n1.Insetion\n2.deletion\n3.display\n4.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insertion();
              break;
            case 2:deletion();
              break;
            case 3:display();
              break;
            case 4:exit(0);
              break;
            default:printf("Entered choice is incorrect.");
              break;  
        }
    }
    return 0;

}