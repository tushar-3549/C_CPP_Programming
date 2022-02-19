#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void RearrageEvenOdd(int arr[],int n)
{
    int j=-1;
    for(int i=0; i<n; i++)
    {
        if(arr[i]%2==0)
        {
            j++;
            swap(arr[i],arr[j]);
        }
    }
}
int main()
{
    int arr[]= {2,1,45,34,78,53,65,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    RearrageEvenOdd(arr,n);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
