#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int dp[5001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	dp[3] = 1, dp[5] = 1;
	for (int i = 6; i <= n; i++) {
		int x = 0, y = 0;
		if (dp[i - 5] != 0) {
			x = dp[i - 5] + 1;
		}
		if (dp[i - 3] != 0) {
			y = dp[i - 3] + 1;
		}
		if (x == 0 && y == 0) dp[i] = -1;
		else if (x != 0 && y == 0) dp[i] = x;
		else if (x == 0 && y != 0) dp[i] = y;
		else dp[i] = min(x, y);
	}
	cout << dp[n];
}
