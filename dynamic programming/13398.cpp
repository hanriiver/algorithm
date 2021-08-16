#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
int arr[100001];
int dp[100001];
int dp1[100001];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> arr[i];
    for (int i = 1; i <= n; i++) {  // i��°���� �����ϴ� �ִ���
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    }
    dp1[n] = arr[n];
    for (int i = n - 1; i >= 1; i--) { // i ��°���� �����ϴ� �����ϴ� �ִ���
        dp1[i] = max(dp1[i + 1] + arr[i], arr[i]);
    }
    int ans = dp[1];
    for (int i = 2; i <= n; i++) ans = max(ans, dp[i]); // �������� �ʾ��� ���� �ִ���
    for (int i = 2; i <= n - 1; i++) {
        ans = max(ans, dp[i - 1] + dp1[i + 1]);
    }

    cout << ans;
}