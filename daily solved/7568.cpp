#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<pair<pair<int, int>, int>> v;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int weight, tall;
		cin >> weight >> tall;
		v.push_back({ { weight,tall },1 });
	}
	for (int i = 0; i < n; i++) {
		int cnt = 0;
		for (int j = 0; j < n; j++) {
			if (i == j) continue;
			if (v[i].first.first < v[j].first.first && v[i].first.second < v[j].first.second) {
				cnt++;
			}
		}
		v[i].second = cnt + 1;
	}
	for (int i = 0; i < n; i++) {
		cout << v[i].second << " ";
	}
}