#include<stdio.h>
int main()
{
    int row,col,n;
    printf("Enter the line number:");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
             printf(" ");
        }

        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");//akta line e same number thakle row print hoy,r akta line e different number print hole col print korte hoy

    }
    return 0;
}
