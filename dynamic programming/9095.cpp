#include <iostream>
#include <algorithm>
using namespace std;

int dp[11];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    cin >> T;
    dp[0] = 1, dp[1] = 1, dp[2] = 2, dp[3] = 4;
    for (int i = 4; i < 11; i++) {
        dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
    }
    while (T--) {
        int n;
        cin >> n;
        cout << dp[n] << "\n";
    }
}