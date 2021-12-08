#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) { // 종료 시간이 같으면
		return a.first < b.first;
	}
	return a.second < b.second;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, ans = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(), cmp);
	int temp = v[0].second;
	for (int i = 1; i < n; i++) {
		if (temp > v[i].first) continue;
		else {
			temp = v[i].second;
			ans++;
		}
	}
	cout << ans;
}
