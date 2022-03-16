#include <bits/stdc++.h>
using namespace std;
vector <int> v[1000];
int vis[1000],colr[1000];
#define pb push_back

bool dfs(int node,int c)
{
    vis[node] = 1;
    colr[node] = c;
    for(int child:v[node])
    {
        if(vis[child] == 0)
        {
            if(dfs(child,c^1) == false)
                return false;
            else
            {
                if(colr[node] == colr[child])
                    return false;
            }
        }
    }
    return true;
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
    bool res = dfs(1,1);
    if(res == true)
    {
        cout << "Bipartite Graph\n";
    }
    else
    {
        cout << "Not Bipartite Graph\n";
    }
    return 0;
}
