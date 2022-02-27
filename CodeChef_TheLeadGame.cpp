#include <iostream>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int lead1 = 0, lead2 = 0;
    while (t--)
    {
        int d1 = 0, d2 = 0, m = 0, n = 0;
        int p1, p2;
        cin >> p1 >> p2;
        m = m + p1;
        n = n + p2;
        if (m > n)
        {
            d1 = m - n;
        }
        if (n > m)
        {
            d2 = n - m;
        }
        if (d1 > lead1)
        {
            lead1 = d1;
        }
        if (d2 > lead2)
        {
            lead2 = d2;
        }
    }
    if (lead1 > lead2)
    {
        cout << 1 << " " << lead1 << endl;
    }
    if (lead2 > lead1)
    {
        cout << 2 << " " << lead2 << endl;
    }
    return 0;
}