#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int dp[1001]; //n번째까지의 증가 부분 수열 중에서 합이 가장 큰
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++) {
        dp[i] = arr[i];
        for (int j = 1; j < i; j++) {
            if (arr[i] > arr[j]) {
                dp[i] = max(dp[j] + arr[i], dp[i]);
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        ans = max(dp[i], ans);
    }
    cout << ans;
}