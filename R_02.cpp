// Second largest element using dynamic memory allocation
#include <bits/stdc++.h>
using namespace std;

void print2largest(int arr[], int arr_size)
{
    int i, first, second;

    if (arr_size < 2)
    {
        cout << "Invalid Input\n";
        return;
    }


    sort(arr, arr + arr_size);

    for (i = arr_size - 2; i >= 0; i--)
    {

        if (arr[i] != arr[arr_size - 1])
        {
            printf("The second largest element is %d\n", arr[i]);
            return;
        }
    }

    cout << "There is no second largest element\n";
}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int *arr, n;
    cin >> n; // size
    arr=new int[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    print2largest(arr, n);
    return 0;
}
