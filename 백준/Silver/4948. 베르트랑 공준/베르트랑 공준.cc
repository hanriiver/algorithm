#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int arr[300001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	for (int i = 1; i <= 300000; i++) arr[i] = i;
	for (int i = 2; i <= 300000; i++) {
		for (int j = i + i; j <= 300000; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	while (cin >> n) {
		int ans = 0;
		if (n == 0) {
			break;
		}
		for (int i = n+1; i <= 2 * n; i++) {
			if (arr[i] != 0) {
				ans++;
			}
		}
		cout << ans << "\n";
	}
}

