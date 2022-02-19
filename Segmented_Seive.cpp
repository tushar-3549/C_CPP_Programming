#include <iostream>
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

vector<int>v;
void seive(int n)
{
    //vector<int> v;
    int prime[100001];
    memset(prime, 0, sizeof(prime));
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = 1;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i] == 0)
            v.push_back(i);
    }
}

void solve(int l, int r)
{
    if (l == 1)
        l++;
    int mx = (r - l) + 1;
    int arr[mx + 2];
    for (int i = 0; i <= mx; i++)
    {
        arr[i] = 0;
    }
    for (int p : v)
    {
        if (p * p <= r)
        {
            int g = (l / p) * p;
            if (g < l)
                g += p;
            for (; g <= r; g += p)
            {
                if (g != p)
                {
                    arr[g - l] = 1;
                }
            }
        }
    }
    for (int i = 0; i < mx; i++)
    {
        if (arr[i] == 0)
        {
            cout << l + i << endl;
        }
        //cout << endl;
    }
}

int main()
{
    seive(100000);
    int t, l, r;
    cin >> t;
    while (t--)
    {
        cin >> l >> r;
        solve(l, r);
        cout << endl;
    }
    return 0;
}
