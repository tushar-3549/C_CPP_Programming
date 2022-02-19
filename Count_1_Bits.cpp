// Playing with bits : Bit masking , Bit manipulation
#include <bits/stdc++.h>
using namespace std;
int count_Bit(int n)
{
    int count = 0;
    while(n > 0)
    {
        count += (n & 1);
        n = n >> 1;
    }
    return count;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;
        int count = 0;
        for(int i = l; i <= r; i++)
        {
            if((i&1) == 0 && i < r)
            {
                count += 2*count_Bit(i) + 1;
                i++;
            }
            else
            {
                count += count_Bit(i);
            }
        }
        cout << count << endl;
    }
    return 0;
}
