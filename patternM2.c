#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter the line number:");
    scanf("%d",&n);
    int c='A';
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",c);
            c=c+1;
        }
        printf("\n");
    }
}
