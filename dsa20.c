//searching in array...
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5]={15,44,6,78,12};
    int l,i=0;
    printf("Element need to be search :");
    scanf("%d",&l);
    while(a[i]!=l)
    {
        i++;
    }
    printf("searched element %d and index is %d ",a[i],i);
    return 0;


}