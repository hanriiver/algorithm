#include <iostream>
#include <algorithm>
using namespace std;
int dp[1001][10]; // i번째 자리수에 j가 왔을때의 오르막수의 개수
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < 10; i++) dp[1][i] = 1;
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 10; j++) {
            for (int k = 0; k <= j; k++) {
                dp[i][j] += dp[i - 1][k];
                dp[i][j] %= 10007;
            }
        }
    }
    int ans = 0;
    for (int i = 0; i < 10; i++) {
        ans += dp[n][i];
        ans %= 10007;
    }
    cout << ans;
}