#include <iostream>
#include <algorithm>
using namespace std;
long long dp[100001][4]; // n�� 1,2,3�� ������ ��Ÿ���� ����� �� ���ڸ��� 1,2,3���� ������
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int T;
    long long mod = 1000000009;
    cin >> T;
    dp[1][1] = 1, dp[2][2] = 1, dp[3][3] = 1, dp[3][1] = 1, dp[3][2] = 1;

    while (T--) {
        int n;
        cin >> n;
        for (int i = 4; i <= n; i++) {
            dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % mod;
            dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % mod;
            dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % mod;
        }
        cout << (dp[n][1] + dp[n][2] + dp[n][3]) % mod << "\n";
    }
}