#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;
priority_queue<int, vector<int>, greater<int>> pq;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x == 0) {
			if (pq.empty()) {
				cout << "0" << "\n";
			}
			else {
				int ans = pq.top();
				cout << ans << "\n";
				pq.pop();
			}
		}
		else {
			pq.push(x);
		}
	}

}
