// Multiply two 3*3 matrices and store the result another 3*3 matrix
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

    int i, j, k, r1, c1, r2, c2, arr1[10][10], arr2[10][10], result[10][10], sum = 0, ans[10][10];
    cout << "Enter row and column for first matrix:\n"; // 3
    cin >> r1 >> c1;
    cout << "Enter row and column for second matrix:\n"; // 3
    cin >> r2 >> c2;
    /* while (r1 != c2)
    {
        cout << "Error\n";
        cout << "Enter row and column for first matrix:\n";
        cin >> r1 >> c1;
        cout << "Enter row and column for second matrix:\n";
        cin >> r2 >> c2;
    } */
    for (i = 1; i <= r1; i++)
    {
        for (j = 1; j <= c1; j++)
        {
            printf("Enter element of first matrix[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    cout << endl;
    for (i = 1; i <= r2; i++)
    {
        for (j = 1; j <= c2; j++)
        {
            printf("Enter element of second matrix[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    for (i = 1; i <= r1; i++)
    {
        cout << endl;
        for (j = 1; j <= c2; j++)
        {
            for (k = 1; k <= c1; k++)
            {
                sum = sum + arr1[i][k] * arr2[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
    }
    for (int i = 1; i <= r1; i++)
    {
        for (int j = 1; j <= c2; j++)
        {
            ans[i][j] = result[i][j];
        }
    }
    cout << "First matrix is\n";
    for (i = 1; i <= r1; i++)
    {
        printf("\t");
        for (j = 1; j <= c1; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        cout << endl;
    }
    cout << endl;
    cout << "Second matrix is\n";
    for (i = 1; i <= r2; i++)
    {
        printf("\t");
        for (j = 1; j <= c2; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    cout << "The multiplication of matrix is:\n"; // which is stored ans[][] matrix
    for (i = 1; i <= r1; i++)
    {
        printf("\t");
        for (j = 1; j <= c2; j++)
        {
            printf("%d ", ans[i][j]);
        }
        cout << endl;
    }
    return 0;
}
