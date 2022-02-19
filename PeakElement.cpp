#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int findPeckElement(int arr[], int n);
int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Peak Element of the Array is : " << endl;
    cout << findPeckElement(arr, n) << endl;
    return 0;
}
int findPeckElement(int arr[], int n)
{
    int peakElement = arr[0];
    if (n == 1)
        return peakElement;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > peakElement)
            peakElement = arr[i];
    }
    return peakElement;
}