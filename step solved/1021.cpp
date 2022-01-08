#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
#include <deque>
using namespace std;
deque<pair<int, int>> dq;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		dq.push_back({ i,i });
	}
	int ans = 0;
	while (m--) {
		int x, p = 0;
		cin >> x;
		for (int i = 0; i < dq.size(); i++) {
			if (dq[i].first == x) {
				p = i;
				break;
			}
		}
		if (p <= dq.size() / 2) {
			while (1) {
				int index = dq.front().first;
				int num = dq.front().second;
				if (index == x) {
					dq.pop_front();
					break;
				}
				else {
					dq.push_back({ dq.front().first,dq.front().second });
					dq.pop_front();
					ans++;
				}
			}
		}
		else {
			while (1) {
				int index = dq.front().first;
				int num = dq.front().second;
				if (index == x) {
					dq.pop_front();
					break;
				}
				else {
					dq.push_front({ dq.back().first,dq.back().second });
					dq.pop_back();
					ans++;
				}
			}
		}
	}
	cout << ans;
}