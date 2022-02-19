//Contiguous sequence subarray
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findLength(int arr[], int n)
{
    int i, j, mn, mx;
    int max_Len = 1;
    for (int i = 0; i < n - 1; i++)
    {
        int mn = arr[i], mx = arr[i];

        for (int j = i + 1; j < n; j++)
        {
            mn = min(mn, arr[j]);
            mx = max(mx, arr[j]);
            if ((mx - mn) == j - i)
                max_Len = max(max_Len, mx - mn + 1);
        }
    }

    return max_Len;
}
int main()
{
    int arr[] = {1, 57, 34, 58, 89, 56, 21, 55};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of the contiguous sub array is : " << findLength(arr, n);
    return 0;
}
//Time complexity O(n^2)