//WAP to Search an Array Element using Binary Search in an Array.
#include<stdio.h>
void binarysearch(int a[],int n)
{
    int low=0,high=n,mid,m,j=0;
    printf("Enter the number to be searched: ");
    scanf("%d",&m);
    mid=(high+low)/2;
    while(a[mid]!=m)
    {
    if(a[mid]<=m)
    {
        low=mid;
        mid=(high+low)/2;
    }
    else if(a[mid]>=m)
    {
        high=mid;
        mid=(high+low)/2;
    }
    j++;
    }
    if(a[mid]==m)
        printf("Number search %d is in index a[%d]",m,mid);
    
}
void sort(int a[],int n)
{
    int temp;
    for(int j=0;j<n;j++){
    for(int i=0;i<n;i++)
    {
        if(a[i]>=a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    }
    printf("\nNow the array is sorted\n");
}
int main()
{
     int a[50],n;
    printf("Enter the size of index: ");
    scanf("%d",&n); 
    for(int i=0;i<n;i++)
    {
        printf("Index[%d]",i);
        scanf("%d",&a[i]);
    }
    sort(a,n);
    binarysearch(a,n);
}