#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
vector<char> v;
stack<int> st;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, cnt = 1;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		while (cnt <= x) {
			v.push_back('+');
			st.push(cnt);
			cnt++;
		}
		if (x == st.top()) {
			v.push_back('-');
			st.pop();
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	for (auto k : v) {
		cout << k << "\n";
	}
}