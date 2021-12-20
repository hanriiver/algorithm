#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	vector<pair<int, int>> v;
	int nx, ny;
	for (int i = 0; i < 3; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	if (v[0].first == v[1].first) {
		nx = v[2].first;
	}
	else if (v[0].first == v[2].first) {
		nx = v[1].first;
	}
	else {
		nx = v[0].first;
	}

	if (v[0].second == v[1].second) {
		ny = v[2].second;
	}
	else if (v[0].second == v[2].second) {
		ny = v[1].second;
	}
	else {
		ny = v[0].second;
	}
	cout << nx << " " << ny;
}

