//Program to reverse an array....
#include<stdio.h>
int main()
{
    int a[5];
    printf("Enter the your element:\n");
    for(int i=0;i<5;i++)
    {
        printf("Index %d: ",i);
        scanf("%d",&a[i]);
    }
    //Reverse element ...
    for(int i=0;i<5;i++)
    {
        printf("%d\n",a[5-i-1]);
    }
}