#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
vector<pair<int, int>> v;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;
		v.push_back({ x,y });
	}
	sort(v.begin(), v.end());
	int result = 0, left = v[0].first, right = v[0].second;
	for (int i = 1; i < n; i++) {
		if (v[i].first < right && v[i].second>right) {
			right = v[i].second;
		}
		else if (v[i].first > right) {
			result += right - left;
			left = v[i].first;
			right = v[i].second;
		}
	}
	cout << result + (right - left);
}