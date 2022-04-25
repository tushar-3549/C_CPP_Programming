// find nCr using class and function
#include <bits/stdc++.h>
using namespace std;
int fact(int n);
class ami
{
    int n, r, ans;

public:
    void ncr(int _n, int _r)
    {
        n = _n;
        r = _r;

        ans = fact(n) / (fact(r) * fact(n - r));
        cout << ans << endl;
    }
};
int fact(int n)
{
    int f = 1;
    for(int i = 2; i <= n; i++)
    {
        f *= i;
    }
    return f;
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    ami obj;
    obj.ncr(5,4);

    return 0;
}
