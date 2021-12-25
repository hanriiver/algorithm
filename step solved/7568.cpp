#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
vector<pair<pair<int, int>, int>> v;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> ans(n);
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ { x,y },i });
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < n; i++) {
		int index = 1;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second) {
				index++;
			}
		}
		ans[v[i].second] = index;
	}
	for (int i = 0; i < n; i++) {
		cout << ans[i] << " ";
	}
}

