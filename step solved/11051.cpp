#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int n, k;
int dp[1001][1001];

void bc() {
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= k; j++) {
            if (j == 0) dp[i][j] = 1;
            else if (i == j) dp[i][j] = 1;
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
            dp[i][j] %= 10007;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    if (n == 0) cout << 0;
    else {
        bc();
    }
    cout << dp[n][k] % 10007;
}