#include <stdio.h>
#include <stdlib.h>

int make_one(int n) {
    long long int* dp = (long long int*)malloc(sizeof(long long int) * (n + 1));
    dp[1] = 0;
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + 1;
        if (i % 2 == 0 && dp[i] > dp[i / 2] + 1) {
            dp[i] = dp[i / 2] + 1;
        }
        if (i % 3 == 0 && dp[i] > dp[i / 3] + 1) {
            dp[i] = dp[i / 3] + 1;
        }
    }
    return dp[n];
}

int main(void) {

    int n = 0;
    scanf("%d", &n);
    printf("%lld\n", make_one(n));

    return 0;
}