#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
using namespace std;
stack<int> st;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int k;
	cin >> k;
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		if (x == 0) st.pop();
		else st.push(x);
	}
	int ans = 0;
	while (!st.empty()) {
		ans += st.top();
		st.pop();
	} 
	cout << ans;
}