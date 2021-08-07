#include <iostream>
#include <algorithm>
using namespace std;

int dp[1001];
// ��ȭ�� : dp[N] = dp[N-1] + dp[N-2] 
// ū ���� = ���� ������ ������ ū������ �ذ��Ѵ�.
// ū ���� n�� ������ ���̰� n-1 + 1 �� ���� n-2 + 2 �� �κ����� ���� �� �ִ�.
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    dp[1] = 1, dp[2] = 2, dp[3] = 3;
    for (int i = 4; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    cout << dp[n];
}