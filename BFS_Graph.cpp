// BFS -> Graph [ single source shortest path ]
#include <bits/stdc++.h>
using namespace std;
vector < int > v[1000];
int dis[1000], vis[1000];
int bfs(int nod)
{
    vis[nod] = 1;
    dis[nod] = 0;
    queue < int > q;
    q.push(nod);
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        for(int child : v[cur])
        {
            if(vis[child] == 0)
            {
                dis[child] = dis[cur] + 1;
                vis[child] = 1;
                q.push(child);
            }
        }
    }
}
int main()
{
    int n, e, x, y;
    cin >> n >> e; // n = node , e = edge
    while(e--)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs(1);
    for(int i=1; i<=n; i++)
    {
        cout << "Distance of node "<< i << "=" << dis[i] << endl;
    }
    return 0;
}
