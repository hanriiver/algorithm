#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

queue<pair<int, int>> qu;

bool cmp(int& a, int& b) {
	if (a > b) return true;
	else return false;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int n, m, cnt = 0, ans = 0;
		cin >> n >> m;
		vector<int> v(n);
		for (int i = 0; i < n; i++) {
			int x;
			cin >> x;
			qu.push({ i,x });
			v.push_back(x);
		}
		sort(v.begin(), v.end(), cmp);
		while (!qu.empty()) {
			int index = qu.front().first;
			int num = qu.front().second;
			qu.pop();
			if (v[cnt] == num) {
				cnt++;
				ans++;
				if (index == m) {
					cout << ans << "\n";
				}
			}
			else {
				qu.push({ index,num });
			}
		}
	}
}