#include <bits/stdc++.h>
using namespace std;

#define    ll     long long int
#define    mx     100001
int arr[mx];
int tree[mx*3];

void init(int node, int b, int e)
{
    // here-> b = begin, e = end
    if(b == e)
    {
        tree[node] = arr[b];
        return;
    }
    int left = node*2;
    int right = node*2+1;
    int mid = (b+e)/2;
    init(left, b, mid);
    init(right, mid+1, e);
    tree[node] = tree[left]+tree[right];
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    init(1,0,n-1);

    for(int i = 1; i < 15; i++)
    {
        cout << tree[i] << endl;
    }

    return 0;
}
