#include<stdio.h>
int main()
{
    int arr[]={2,4,6,8,10,12,14,16,18};
    int pos=5,data=55,i;
    int size = sizeof(arr)/sizeof(arr[0]);
    int arr2[size+1];
    add_at_pos(arr,arr2,size,data,pos);
    for(i=0;i<size+1;i++)
    printf("%d ",arr2[i]);
}
void add_at_pos(int arr[],int arr2[],int n,int data,int pos)
{
    int i;
    int index=pos-1;
    for(i=0;i<index;i++)
    arr2[i] = arr[i];
    arr2[index]=data;
    int j;
    for(i=index+1,j=index;i<n+1,j<n;i++,j++)
    arr2[i]=arr[j];
}