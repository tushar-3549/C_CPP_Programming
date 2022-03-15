// single shortest path using depth fast search

#include <bits/stdc++.h>
using namespace std;

#define pb  push_back
vector <int> v[1000];
int vis[1000],dis[1000];

void dfs(int node,int d)
{
    vis[node]=1;
    dis[node]=d;
    for(int child: v[node])
    {
        if(vis[child]==0)
        {
            dfs(child,d+1);
        }
    }
}
int main()
{
    int n, e;
    cin >> n >> e;
    while(e--)
    {
        int x, y;
        cin >> x >> y;
        v[x].pb(y);
        v[y].pb(x);
    }
    int source;
    cin >> source;
    dfs(source,0);

    for(int i = 1; i <= n; i++)
    {
        cout << source << " -> " << i << " -> "<<dis[i] <<endl;
    }
    return 0;
}
