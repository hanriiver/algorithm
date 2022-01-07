#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
stack<int> st;
int arr[1000001];
vector<int> ans;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}
	for (int i = n; i > 0; i--) {
		while (!st.empty() && st.top() <= arr[i]) {
			st.pop();
		}
		if (st.empty()) ans.push_back(-1);
		else ans.push_back(st.top());

		st.push(arr[i]);
	}
	for (int i = ans.size() - 1; i >= 0; i--) {
		cout << ans[i] << " ";
	}
}