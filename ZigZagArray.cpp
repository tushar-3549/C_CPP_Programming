#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ZigZag(int arr[],int n)
{
    bool flag=true;
    for(int i=0;i<n-1;i++)
    {
        if(flag)
        {
            if(arr[i]>arr[i+1])
            
            swap(arr[i],arr[i+1]);
            
        }
        else
        {
            if(arr[i]<arr[i+1])
            swap(arr[i],arr[i+1]);
        }
        flag = !flag;
    }
}
int main()
{
    int arr[]={4,3,7,8,11,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    ZigZag(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    return 0;
}