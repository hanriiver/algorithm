#include<bits/stdc++.h>
using namespace std;
int dp[16];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	dp[1] = 3;
	for (int i = 2; i < 16; i++) {
		dp[i] = dp[i - 1] + dp[i - 1] - 1;
	}
	cout << dp[n] * dp[n];
}