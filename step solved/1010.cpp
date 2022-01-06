#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
long long dp[31][31];
void bc(int m, int n) {
    if (m == 0) {
        return;
    }
    for (int i = 1; i <= m; i++) {
        for (int j = 0; j <= n; j++) {
            if (j == 0) dp[i][j] = 1;
            else if (i == j) dp[i][j] = 1;
            else {
                dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j];
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    bc(30, 30);
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << dp[m][n] << "\n";
    }
}