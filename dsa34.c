//WAP to check whether a given Matrix is SPARSE Matrix or not.
//SPARSE Matrix is a matrix which have max element of zero.
#include<stdio.h>
int main()
{
    int a[30][30];
    int r,c;
    printf("Enter the row and colom: ");
    scanf("%d\n%d",&r,&c);
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("Enter the a[%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    int size1=0,size2=0;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(a[i][j]!=0)
            {
                size1++;
            }
            else
            {
                size2++;
            }
        }
    }
    printf("This matrix:\");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
           
        }
        printf("\n");
    }
    printf("\n");
    if(size1<size2)
    {
        printf("Given matrix is Sparse matrix.");
    }
    else{
        printf("Giver is not a sparse matrix.");
    }
    return 0;
}
