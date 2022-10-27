//WAP to find Transpose of a given Matrix.
#include<stdio.h>
int main()
{
    int a[50][50],r,c;
    printf("Enter the row and coloum: ");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Matrix.\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Transpose of matrix.\n");
    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

}