// Cycle detection in a graph using DFS(Depth First Search)

#include <bits/stdc++.h>
using namespace std;
vector <int> v[1000];
int vis[1000];
bool dfs(int node, int parent)
{
    vis[node] = 1;
    for(int child : v[node])
    {
        if(vis[child] == 0)
        {
            if(dfs(child,node) == true)
            {
                return true;
            }
            else 
            {
                if(child != parent)
                {
                    return true;
                }
            }
        }
    }
    return false;
}
int main()
{
    int n, e; // node , edge 
    cin >> n >> e;
    while(e --)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bool res = dfs(1,-1);
    if(res == true)
    {
        cout << "The graph has cycle\n"; // cycle 
    }
    else 
    {
        cout << "The graph has not cycle\n"; // Not cycle 
    }
    return 0;
}
