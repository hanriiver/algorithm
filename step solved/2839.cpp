#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int dp[5001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	fill(dp, dp + 5001, 9999);
	dp[3] = 1, dp[5] = 1;
	for (int i = 6; i <= n; i++) {
		dp[i] = min(dp[i - 3] + 1, dp[i - 5] + 1);
	}
	if (dp[n] >= 9999) cout << -1;
	else cout << dp[n];
}

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, ans = 0;
	cin >> n;
	while (n >= 0) {
		if (n % 5 == 0) {
			ans += n / 5;
			cout << ans;
			return 0;
		}
		n -= 3;
		ans++;
	}
	cout << -1;
}


