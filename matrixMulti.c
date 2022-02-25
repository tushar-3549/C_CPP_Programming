#include<stdio.h>
int main()
{
    int i,j,k,r1,c1,r2,c2,arr1[10][10],arr2[10][10],result[10][10],sum=0;
    printf("Enter row and column for first matrix:\n");
    scanf("%d %d",&r1,&c1);
    printf("Enter row and column for second matrix:\n");
    scanf("%d %d",&r2,&c2);
    while(r1!=c2)
    {
        printf("Error\n");
        printf("Enter row and column for first matrix:\n");
        scanf("%d %d",&r1,&c1);
        printf("Enter row and column for second matrix:\n");
        scanf("%d %d",&r2,&c2);
    }
    for(i=1; i<=r1; i++)
    {
        for(j=1; j<=c1; j++)
        {
            printf("Enter element of first matrix[%d][%d] = ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("\n");
    for(i=1; i<=r2; i++)
    {
        for(j=1; j<=c2; j++)
        {
            printf("Enter element of second matrix[%d][%d] = ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=1; i<=r1; i++)
    {
        printf("\n");
        for(j=1; j<=c2; j++)
        {
            for(k=1; k<=c1; k++)
            {
                sum=sum+arr1[i][k]*arr2[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }
    }
    printf("first matrix is\n");
    for(i=1; i<=r1; i++)
    {
        printf("\t");
        for(j=1; j<=c1; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("second matrix is\n");
    for(i=1; i<=r2; i++)
    {
        printf("\t");
        for(j=1; j<=c2; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    printf("the multiplication of matrix is:\n");
    for(i=1; i<=r1; i++)
    {
        printf("\t");
        for(j=1; j<=c2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
    return 0;
}
