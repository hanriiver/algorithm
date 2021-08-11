#include <iostream>
#include <algorithm>
using namespace std;
int dp[1001][3]; //n번째집까지 빨강 초록 파랑을 연속해서 사용하지 않고 모든 집을 칠하는 비용의 최솟값을 저장
int arr[1001][3];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];
        }
    }
    dp[0][0] = arr[0][0], dp[0][1] = arr[0][1], dp[0][2] = arr[0][2];
    for (int i = 1; i < n; i++) {
        dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + arr[i][0];
        dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + arr[i][1];
        dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + arr[i][2];
    }
    cout << min({ dp[n - 1][0], dp[n - 1][1], dp[n - 1][2] });
}