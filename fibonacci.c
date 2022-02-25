// using dynamic programming 
#include<stdio.h>

int dp[100005];

int fibo(int n)
{
    if(n <= 1) return n;
    if(dp[n] != -1) return dp[n];
    dp[n] = fibo(n - 1) + fibo(n - 2);
    return dp[n];
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i = 0; i <= n; i++) dp[i] = -1;
    printf("%d\n", fibo(n));
    main();
    return 0;
}
