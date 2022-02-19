// Different between maximum and minimum of all subset
#include <bits/stdc++.h>
using namespace std;
int solve(int arr[], int n)
{
    int mx = 0, mn = 0;
    int a = 1;
    // for max
    for (int i = 0; i < n; i++)
    {
        mx += arr[i] * a;
        a *= 2;
    }
    // for min
    a = 1;
    for (int i = n-1; i >= 0; i--)
    {
        mn += arr[i] * a;
        a *= 2;
    }
    return mx - mn;
}
int main()
{
    int n;
    cin >> n;
    int arr[20];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    cout << "Different between maximum and minimum of all subset :" << endl;
    cout << solve(arr, n) << endl;
}