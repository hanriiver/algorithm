#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int dp[41][2];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	dp[0][0] = 1, dp[1][1] = 1, dp[2][0] = 1, dp[2][1] = 1;
	for (int i = 3; i <= 40; i++) {
		dp[i][0] = dp[i - 1][0] + dp[i - 2][0];
		dp[i][1] = dp[i - 1][1] + dp[i - 2][1];
	}
	while (T--) {
		int n;
		cin >> n;
		cout << dp[n][0] << " " << dp[n][1] << "\n";
	}
}

