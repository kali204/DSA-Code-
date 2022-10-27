#include<stdio.h>
int main()
{
    int a[50],n,flag,j=0,temp;
    printf("Enter size of index: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Index[%d]",i);
        scanf("%d",&a[i]);
        if(a[i]==0||a[i]==1)
        {
            flag=1;
        }
    }
    for(int i=a[j];i<a[j]/2;i++)
    {
        if(a[j]%i==0)
        {
            flag==1;
        }
        else
        {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
        }
        j++;
    }
    for(int i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }

}