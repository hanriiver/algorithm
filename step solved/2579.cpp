#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[301];
int dp[301][4];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1][1] = arr[1], dp[2][1] = arr[2], dp[2][2] = arr[1] + arr[2];
    for (int i = 3; i <= n; i++) {
        dp[i][1] = max(dp[i - 2][2], dp[i - 2][1]) + arr[i];
        dp[i][2] = dp[i - 1][1] + arr[i];
    }
    int ans = max(dp[n][1], dp[n][2]);
    cout << ans;
}