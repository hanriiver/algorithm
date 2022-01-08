#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
int arr[101];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		queue<pair<int, int>> qu;
		int n, m;
		cin >> n >> m;
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			arr[i] = x;
			qu.push({ i,x });
		}
		sort(arr, arr + n);
		int cnt = n - 1;
		int ans = 0;
		while (!qu.empty()) {
			int index = qu.front().first;
			int num = qu.front().second;
			qu.pop();
			if (arr[cnt] == num) {
				cnt--;
				ans++;
				if (index == m) {
					cout << ans << "\n";
					break;
				}
			}
			else {
				qu.push({ index,num });
			}

		}
	}
}