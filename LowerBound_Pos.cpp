#include<bits/stdc++.h>
using namespace std;
int lowerBound(int arr[],int x,int n)
{

    int l=0,r=n-1,mid, pos = n;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(arr[mid]<x)
        {
            l=mid+1;
        }
        else
        {
            r=mid - 1;
            pos = r;
        }
        //printf("x");
    }

    return pos;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
        cin>>arr[i];
    sort(arr,arr+n);
    int q;
    cin>>q;
    while(q--)
    {
        int x;
        cin>>x;
        int ans = lowerBound(arr,x,n);
        cout<<ans<<endl;
    }
    return 0;
}
