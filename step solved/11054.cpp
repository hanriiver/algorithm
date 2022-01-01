#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[1001];
int dp[1001];
int dp1[1001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    // i번째를 마지막으로 하는 증가하는 부분수열
    for (int i = 1; i <= n; i++) {
        dp[i] = 1;
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
    }
    for (int i = n; i >= 1; i--) {
        dp1[i] = 1;
        for (int j = n; j > i; j--) {
            if (arr[i] > arr[j]) {
                dp1[i] = max(dp1[j] + 1, dp1[i]);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max({ ans,dp[i] + dp1[i] - 1 });
    }
    cout << ans;
}