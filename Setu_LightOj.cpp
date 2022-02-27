#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n,k;
    string s;
    cin >> t;
    for(int i=1; i<=t; i++)
    {
        cin >> n;
        cout <<"Case "<<i<<":"<<endl;
        int sum = 0;
        for(int j=1; j<=n; j++)
        {
            cin >> s;
            if(s=="donate")
            {
                cin>>k;
                sum+=k;
            }
            else
            {
                cout << sum << endl;
            }
        }
    }
    return 0;
}
