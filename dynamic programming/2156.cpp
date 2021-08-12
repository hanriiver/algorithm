#include <iostream>
#include <algorithm>
using namespace std;
int dp[10001][3]; // n번째 포도주를 0,1,2번 연속해서 마시는 경우의 수
int arr[10001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) {
        dp[i][0] = max({ dp[i - 1][0],dp[i - 1][1],dp[i - 1][2] });
        dp[i][1] = dp[i - 1][0] + arr[i];
        dp[i][2] = dp[i - 1][1] + arr[i];
    }
    int ans = 0;
    ans = max({ dp[n][0],dp[n][1],dp[n][2] });
    cout << ans;
}