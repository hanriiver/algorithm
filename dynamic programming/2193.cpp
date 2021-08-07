#include <iostream>
#include <algorithm>
using namespace std;
long long dp[91][2]; // 길이가 n인 계단수에 마지막에 오는 수를 저장
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    dp[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        dp[i][0] = dp[i - 1][1] + dp[i - 1][0];
        dp[i][1] = dp[i - 1][0];
    }
    cout << dp[n][0] + dp[n][1];
}