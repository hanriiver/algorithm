#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
// 점화식 : dp[N] = dp[N-1] + dp[N-2]*2 
// 큰 문제 = 작은 문제로 나눠서 큰문제를 해결한다.
// 큰 문제 n은 가로의 길이가 n-1 + 1 인 경우와 n-2 + 2 경우와 n-2 + 2 인경우 총 3가지가 있다.
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    dp[1] = 1, dp[2] = 3;
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + (dp[i - 2] * 2)) % 10007;
    }
    cout << dp[n];
}