#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<pair<int, int>> v;
bool cmp(pair<int, int> v1, pair<int, int> v2) {
	if (v1.second == v2.second) {
		return v1.first < v2.first;
	}

	return v1.second < v2.second;

}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end(), cmp);
	for (auto k : v) {
		cout << k.first << " " << k.second << "\n";
	}
}
