#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[501][501];
int dp[501][501];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cin >> arr[i][j];
        }
    }
    dp[1][1] = arr[1][1];
    for (int i = 2; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + arr[i][j];
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(ans, dp[n][i]);
    }
    cout << ans;
}