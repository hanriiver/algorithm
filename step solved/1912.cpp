#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int arr[100001];
int dp[100001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    dp[1] = arr[1];
    for (int i = 2; i <= n; i++) {
        dp[i] = max({ dp[i - 1] + arr[i],arr[i] });
    }
    int ans = -987654321;
    for (int i = 1; i <= n; i++) {
        ans = max({ dp[i],ans });
    }
    cout << ans;
}