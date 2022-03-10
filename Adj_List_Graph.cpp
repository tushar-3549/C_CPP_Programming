// using adjacency list (graph representation)
#include <bits/stdc++.h>
using namespace std;
vector <int> v[1000];
int main()
{
    int node, edge;
    cin >> node >> edge;
    while(edge--)
    {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1; i<=node; i++)
    {
        cout << i;
        for(int j=0; j<v[i].size(); j++)
        {
            cout << "->" << v[i][j];
        }
        cout << endl;
    }
    return 0;
}
