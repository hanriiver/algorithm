#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		stack<char> st;
		string s;
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (st.empty()) {
				st.push(s[i]);
			}
			else {
				if (s[i] == ')' && st.top() == '(') {
					st.pop();
				}
				else {
					st.push(s[i]);
				}
			}
		}
		if (st.empty()) {
			cout << "YES" << "\n";
		}
		else {
			cout << "NO" << "\n";
		}
	}
}