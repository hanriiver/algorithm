#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int arr[301];
int dp[301][2];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) cin >> arr[i];
	dp[1][0] = arr[1], dp[1][1] = arr[1], dp[2][0] = arr[2], dp[2][1] = arr[1] + arr[2];
	for (int i = 3; i <= n; i++) {
		dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + arr[i];
		dp[i][1] = dp[i - 1][0] + arr[i];
	}
	cout << max(dp[n][0], dp[n][1]);
}
