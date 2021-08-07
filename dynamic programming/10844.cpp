#include <iostream>
#include <algorithm>
using namespace std;
int dp[101][11]; // 길이가 n인 계단수에 마지막에 오는 수를 저장
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    long long mod = 1000000000;
    cin >> n;
    for (int i = 1; i < 10; i++) {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            if (j == 0) {
                dp[i][j] = dp[i - 1][j + 1];

            }
            else if (j == 9) {
                dp[i][j] = dp[i - 1][j - 1];

            }
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
            }
            dp[i][j] %= mod;
        }
    }
    long long ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += dp[n][i];
        ans %= mod;
    }
    cout << ans;
}