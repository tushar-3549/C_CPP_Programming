#include<stdio.h>
int main()
{
    int n;
    printf("Number of Items : ");
    scanf("%d",&n);
    int weight[n];
    printf("weight : ");
    for(int i=0;i<n;i++)
        scanf("%d",&weight[i]);
    int c;
    printf("Bin Capacity : ");
    scanf("%d",&c);
    int res=0;
    int bin[n];
    int j;
    for(int i=0;i<n;i++)
    {
        for( j=0;j<res;j++)
        {
            if(bin[j]>=weight[i])
            {
                bin[j]=bin[j]-weight[i];
                break;
            }
        }
        if(j==res)
        {
            bin[res]=c-weight[i];
            res++;
        }

    }

    printf("We need %d bins to accommodate all items",res);
    return 0;
}
