#include <bits/stdc++.h>
using namespace std;
int val1, val2;
bool solve(int arr[], int x, int n)
{
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        int sum = arr[i] + arr[j];
        if (sum == x)
        {
            val1 = arr[i];
            val2 = arr[j];
            return ;
        }

        if (sum > x)
            j--;
        else
            i++;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    bool ans = solve(arr, x, n);
    if (ans == true)
    {
        cout << "Yes\n";
        cout << val1 << " " << val2 << endl;
    }
    else
    {
        cout << "No\n";
    }
    return 0;
}