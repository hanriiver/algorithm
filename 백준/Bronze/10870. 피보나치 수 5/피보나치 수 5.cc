#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v1;
int dp[21];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	dp[0] = 0, dp[1] = 1, dp[2] = 1;
	for (int i = 3; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	cout << dp[n];
}