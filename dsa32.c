//WAP to Search an Array Element using Linear Search in an Array.
#include<stdio.h>
void search(int a[],int n)
{
    int m;
    printf("Enter the number to search in array: ");
    scanf("%d",&m);
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            printf("Element founded.");
        }
    }
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
    search(a,n);
}