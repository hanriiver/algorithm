#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
vector<int> ans;
queue<int> qu;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}
	cout << "<";
	while (!qu.empty()) {
		for (int i = 1; i < k; i++) {
			qu.push(qu.front());
			qu.pop();
		}
		ans.push_back(qu.front());
		qu.pop();
	}
	for (int i = 0; i < ans.size(); i++) {
		if (i == ans.size() - 1) {
			cout << ans[i] << ">";
		}
		else {
			cout << ans[i] << ", ";
		}
	}
}
