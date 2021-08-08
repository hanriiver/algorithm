#include <iostream>
#include <algorithm>
using namespace std;
int dp[1001]; //arr을 마지막으로 하는 부분수열의 길이
int arr[1001];
int ans = 0;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[j] + 1, dp[i]);
            }
        }
        ans = max(dp[i], ans);
    }
    cout << ans;
}