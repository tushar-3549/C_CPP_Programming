#include <bits/stdc++.h>
#define   pb     push_back
using namespace std;
vector <int> v[1001];
int arr[1001],in[1001],low[1001];
int timer, cnt = 0;
set  <int> ans;

void dfs(int node, int par)
{
    arr[node] = 1;
    in[node] = low[node] = timer++;
    int cnt = 0;
    for(int child: v[node])
    {
        if(child == par)
            continue;
        if(arr[child] == 1)
        {
            low[node] = min(low[node], in[child]);
        }
        else
        {
            dfs(child, node);
            cnt++;
            low[node] = min(low[node], low[child]);
            if(low[child] >= in[node] && par != -1)
            {
                ans.insert(node);
            }
        }
    }
    if(par == -1 && cnt > 1)
        ans.insert(node);

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
    dfs(1, -1);

    cout << ans.size() << endl;
    for(auto a: ans)
    {
        cout << a << " ";
    }
    cout << endl;

    return 0;

}
