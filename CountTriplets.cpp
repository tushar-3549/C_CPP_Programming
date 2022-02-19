#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int CountTriplets(int arr[], int n, int sum)
{
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] < sum)
                {
                    ans++;
                }
            }
        }
    }
    return ans;
}
int main()
{
    int arr[] = {5, 1, 3, 4, 7};
    int n = sizeof arr / sizeof(arr[0]);
    int sum = 12;
    cout << CountTriplets(arr, n, sum) << endl;
    return 0;
}
//Time Complexity -> O(n^3)