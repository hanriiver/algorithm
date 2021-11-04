#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int k, ans = 0;
	cin >> k;
	stack<int> st;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		if (st.empty() && x == 0) continue;
		if (st.empty()) {
			st.push(x);
			continue;
		}
		if (x == 0) {
			st.pop();
		}
		else st.push(x);
	}
	while (!st.empty()) {
		int temp = st.top();
		st.pop();
		ans += temp;
	}
	cout << ans;
}
