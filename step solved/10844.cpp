#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
long long dp[101][10];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i < 10; i++) dp[1][i] = 1;
    // i번 자리수에서 끝자리가 j인 경우
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][1];
            }
            else if (j == 9) {
                dp[i][j] = dp[i - 1][8];
            }
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
            dp[i][j] %= 1000000000;
        }
    }
    long long ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += dp[n][i];
    }
    ans %= 1000000000;
    cout << ans;
}