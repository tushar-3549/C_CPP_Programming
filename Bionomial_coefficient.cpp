#include <bits/stdc++.h>
#include <iostream>
typedef long long int ll;
#define mod 1000000007
using namespace std;

ll fact(ll n)
{
    ll ans = 1;
    for (ll i = 1; i <= n; i++)
    {
        ans = (ans * i) % mod;
    }
    return ans;
}

ll power(ll b, ll p)
{
    ll ans = 1;
    while (p)
    {
        if (p % 2 == 1)
        {
            ans = (ans * b) % mod;
            p--;
        }
        else
        {
            b = (b * b) % mod;
            p = p / 2;
        }
    }
    return ans % mod;
}

ll nCr(ll n1, ll r1, ll k)
{
    ll ans = n1, ans1, ans2;
    ans1 = power(r1, mod - 2) % mod;
    ans2 = power(k, mod - 2) % mod;
    ans = (ans * ans1) % mod;
    ans = (ans * ans2) % mod;
    return ans % mod;
}

int main()
{
    ll n, r, n1, r1, k, ans;
    cin >> n >> r;
    n1 = fact(n);
    r1 = fact(r);
    k = fact(n - r);
    ans = nCr(n1, r1, k);
    cout << ans << endl;
    return 0;
}