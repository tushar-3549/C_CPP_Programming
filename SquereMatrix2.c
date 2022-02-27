#include <stdio.h>
int main()
{
    int m, i, j, N, k;
    while (1)
    {
        scanf("%d", &N);
        if (N == 0)
            break;
        int arr[N][N];
        for (i = 0; i < N; i++)
        {
            m = i + 1;
            k = 2;
            for (j = 0; j <= i; j++, m--)
            {
                arr[i][j] = m;
            }
            for (j = i + 1; j < N; j++, k++)
            {
                arr[i][j] = k;
            }
        }

        // print
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (j == 0)
                    printf("%3d", arr[i][j]);
                else
                    printf(" %3d", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
