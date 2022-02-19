#include <bits/stdc++.h>
using namespace std;
void print(vector<int>&v,int n)
{
    for(int i=0;i<n;i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    /*string s;
    cin >> s;
    sort(s.begin(),s.end());
    while(next_permutation(s.begin(),s.end()))
    {
        cout << s << endl;
    }*/
    int n;
    cin >> n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    while(next_permutation(v.begin(),v.end()))
    {
        print(v,n);
    }
}