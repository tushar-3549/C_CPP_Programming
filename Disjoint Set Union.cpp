// Disjoint Set Union
#include <bits/stdc++.h>
using namespace std;
const  int  N = 1e5+10;
int parent[N];
int Size[N];
void make(int v)
{
    parent[v] = v;
    Size[v] = 1;
}
int find(int v)
{
    if(v == parent[v])
        return v;
    return parent[v] = find(parent[v]);
}
void Union(int a, int b)
{
    a = find(a);
    b = find(b);
    if(a != b)
    {
        if(Size[a] < Size[b])
            swap(a, b);
        parent[b] = a;
        Size[a] += Size[b];
    }
}
int main()
{
    int n, q;
    cin >> n >> q;
    for(int i = 1; i <= n; i++)
        make(i);
    int u, v;
    while(q--)
    {
        //int u, v;
        cin >> u >> v;
        Union(u, v);
    }

    int connect_cm = 0;
    for(int i = 1; i <= n; i++)
    {
        if(find(i) == i)
            connect_cm++;
    }
    cout << connect_cm << endl;


    return 0;
}
