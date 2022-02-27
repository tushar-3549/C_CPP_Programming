#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n; // row * col matrix 
    cin >> n;
    int matrix[n + 1][n + 1];
    // user input matrix element
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    // transpose matrix 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }
    // 90 degree rotate the matrix 
    for (int i = 0; i < n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(matrix[i][j], matrix[n - 1 - i][j]);
        }
    }
    cout << endl;
    // output the 90 degree rotate matrix 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}