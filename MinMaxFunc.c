#include<stdio.h>
int main()
{
    int arr[10],i,m;
    for(i=0; i<10; i++)
    {
        scanf("%d",&arr[i]);
    }
    m=maximum(arr);
    printf("\nMaximum Number : %d",m);
    m=minimum(arr);
    printf("\nMinimum Number : %d\n",m);
    return 0;

}
int maximum(int arr[])
{
    int i,m=-37452;
    for(i=0; i<10; i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    return m;
}
int minimum(int arr[])
{
    int i,m=37452;
    for(i=0; i<10; i++)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    return m;
}
