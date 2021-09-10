#include <iostream>
#include <algorithm>
#include <vector>
#include <limits.h>
#include <stdio.h>
using namespace std;
int dp[10001];
int arr[101];

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= k; i++) dp[i] = 10001;
	for (int i = 0; i < n; i++) cin >> arr[i];
	for (int i = 0; i < n; i++) {
		for (int j = 1; j <= k; j++) {
			if (arr[i] <= j) {
				dp[j] = min(dp[j], dp[j - arr[i]] + 1);
			}
		}
	}
	if (dp[k] == 10001) cout << "-1";
	else cout << dp[k];
}