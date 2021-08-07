#include <iostream>
#include <algorithm>
using namespace std;

int dp[1000001];
int go(int n) { //탑다운방식 재귀로 해결
    if (n <= 1) return 0;
    if (dp[n] > 0) return dp[n]; // 메모이제이션부분
    dp[n] = go(n - 1) + 1;
    if (n % 3 == 0) {
        dp[n] = min(dp[n / 3] + 1, dp[n]);
    }
    if (n % 2 == 0) {
        dp[n] = min(dp[n / 2] + 1, dp[n]);
    }
    return dp[n];
}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    dp[1] = 0;
    for (int i = 2; i <= n; i++) { // 바텀업 방식 반복문으로 해결
        int temp = 0;
        dp[i] = dp[i - 1] + 1; // 초기 비교해야할 대상을 설정(항상 가능한 간단한 조건을 이용)
        if (i % 3 == 0) {
            temp = dp[i / 3] + 1;
            dp[i] = min(temp, dp[i]);
        }
        if (i % 2 == 0) {
            temp = dp[i / 2] + 1;
            dp[i] = min(temp, dp[i]);
        }
    }
    cout << go(10);
}