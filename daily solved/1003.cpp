#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int dp[41];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	dp[0] = 1, dp[1] = 1, dp[2] = 1;
	for (int i = 3; i <= 40; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	while (T--) {
		int x;
		cin >> x;
		if (x == 0) {
			cout << "1 0";
		}
		else if (x == 1) {
			cout << "0 1";
		}
		else {
			cout << dp[x - 1] << " " << dp[x];
		}
		cout << "\n";
	}

}
