#include <bits/stdc++.h>
using namespace std;
int n;
int arr[4];
int dp[61][61][61];
int go(int a, int b, int c) {
    if (a <= 0 && b <= 0 && c <= 0) {
        return 0;
    }
    if (a < 0) return go(0, b, c);
    if (b < 0) return go(a, 0, c);
    if (c < 0) return go(a, b, 0);
    if (dp[a][b][c] != -1) return dp[a][b][c];

    dp[a][b][c] = 9876543210;
    dp[a][b][c] = min(dp[a][b][c], go(a - 9, b - 1, c - 3) + 1);
    dp[a][b][c] = min(dp[a][b][c], go(a - 9, b - 3, c - 1) + 1);
    dp[a][b][c] = min(dp[a][b][c], go(a - 3, b - 9, c - 1) + 1);
    dp[a][b][c] = min(dp[a][b][c], go(a - 3, b - 1, c - 9) + 1);
    dp[a][b][c] = min(dp[a][b][c], go(a - 1, b - 9, c - 3) + 1);
    dp[a][b][c] = min(dp[a][b][c], go(a - 1, b - 3, c - 9) + 1);

    return dp[a][b][c];
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(dp, -1, sizeof(dp));
    cout << go(arr[0], arr[1], arr[2]);
}