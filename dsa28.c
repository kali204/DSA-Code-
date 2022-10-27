//find pair of array where sum is 30...
#include<stdio.h>
int main()
{
    int a[50],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the index[%d]",i);
        scanf("%d",&a[i]);
    }
    //find pair of array equal to 30.....
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]+a[j]==30)
            {
                printf("{%d,%d}at index[%d,%d]\n",a[i],a[j],i,j);
            }
        }
    }

}