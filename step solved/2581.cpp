#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int arr[10001];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int m, n, sum = 0, ans_min = 10001;
	cin >> m >> n;

	for (int i = 2; i <= 10000; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= 10000; i++) {
		for (int j = i * i; j <= 10000; j += i) {
			if (arr[j] == 0) continue;
			arr[j] = 0;
		}
	}
	for (int i = m; i <= n; i++) {
		if (arr[i] != 0) {
			sum += i;
			if (ans_min > arr[i]) {
				ans_min = arr[i];
			}
		}
	}
	if (sum == 0) {
		cout << -1;
	}
	else {
		cout << sum << "\n" << ans_min;
	}
}

