//WAP to Right Rotate an Array and show their all outcomes.
#include<stdio.h>
int main()
{
    int a[50],d,t[50],n;
    printf("Enter the size of index: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Index[%d]",i);
        scanf("%d",&a[i]);
    }
    //right rotation...
    printf("Enter the postion to rotate right: ");
    scanf("%d",&d);
    for(int i=n-d,j=0;i<n,j<d;i++,j++)
    {
        t[j]=a[i];
    }
    for(int i=0,j=d;i<n-d,j<n;i++,j++)
    {
        t[j]=a[i];
    }
    for(int i=0,j=0;i<n,j<n;i++,j++)
    {
        a[i]=t[j];
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}