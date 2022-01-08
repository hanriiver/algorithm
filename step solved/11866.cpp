#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
queue<int> qu;
vector<int> ans;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, k;
	cin >> n >> k;
	int cnt = 1;
	for (int i = 1; i <= n; i++) {
		qu.push(i);
	}
	while (!qu.empty()) {
		if (cnt % k == 0) {
			ans.push_back(qu.front());
			qu.pop();
		}
		else {
			int temp = qu.front();
			qu.pop();
			qu.push(temp);
		}
		cnt++;
	}
	cout << "<";
	for (int i = 0; i < ans.size(); i++) {
		if (i == ans.size() - 1) {
			cout << ans[i] << ">";
		}
		else {
			cout << ans[i] << ", ";
		}
	}
}