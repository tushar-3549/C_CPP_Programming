#include<stdio.h>
#define N1 5
#define N2 3
int main()
{
    int a[N1],b[N2],c[N1+N2],i,index=0,min,j;
    printf("Enter %d Arrays Elements\n",N1);
    for(i=0; i<N1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter %d Arrays Elements\n",N2);
    for(i=0; i<N2; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<N1; i++)
        c[index++]=a[i];
    for(i=0; i<N2; i++)
        c[index++]=b[i];
    for(i=0; i<(N1+N2); i++)
    {
        min=i;
        for(j=i+1; j<(N1+N2); j++)
        {
            if(c[j]<c[min])
            {
                min=j;
            }
        }
        int temp=c[i];
        c[i]=c[min];
        c[min]=temp;
    }
    printf("Merged Array in Sorted order\n");
    for(i=0; i<(N1+N2); i++)
        printf("%d ",c[i]);
    return 0;
}
