//Searching array by binary search 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a[5]={25,6,12,5,4};
    int t;
    //sorting an array..
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        if(a[i]>a[j])
        {
          t=a[i];
          a[i]=a[j];
          a[j]=t;
        }
    }
    for(int i=0;i<5;i++)
    {
        printf("%d,",a[i]);
    }
}