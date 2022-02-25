#include<stdio.h>
int main()
{
    int n,k,code,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&k);
        for(j=1;j<=k;j++)
        {
            scanf("%d",&code);

            if(code==1)
                printf("Tushar\n");
             else if(code==2)
                printf("Milon\n");
                 else if(code==3)
                printf("Emon\n");
                else if(code==4)
                printf("Abdullah\n");
                else if(code==5)
                printf("Aslam\n");
        }
    }
    return 0;
}
