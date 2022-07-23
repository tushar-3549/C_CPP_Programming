// Finding Bridges using Graph Theory

#include <bits/stdc++.h>
using namespace std;

#define   pb     push_back
#define   endl   '\n'

int low[1000], in[1000], vis[1000];
vector <int> v[1000];
int timer;

void dfs(int node,int par)
{
    vis[node] = 1;
    in[node] = timer;
    low[node] = timer;
    timer++;
    for(int child:v[node])
    {
        if(child == par)
            continue;
        else
        {
            if(vis[child] == 1)
            {
                low[node] = min(low[node],in[child]);
            }
            else
            {
                dfs(child,node);
                if(low[child] > in[node])
                {
                    cout << node << " -> " << child << endl;
                }
                low[node] = min(low[node],low[child]);
            }
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
    dfs(1,-1);

    return 0;
}
