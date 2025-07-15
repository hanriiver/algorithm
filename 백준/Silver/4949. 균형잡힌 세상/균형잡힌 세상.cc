#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
using namespace std;
 
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	string s;
	while (getline(cin,s)) {
		stack<char> st;
		if (s == ".") {
			break;
		}
		for (int i = 0; i < s.size(); i++) {
			if (st.empty()&&(s[i]=='('||s[i]==')'||s[i]=='['||s[i]==']')) {
				st.push(s[i]);
			}
			else {
				if (s[i] == ')' && st.top() == '(') {
					st.pop();
				}
				else if (s[i] == ']' && st.top() == '[') {
					st.pop();
				}
				else if (s[i] == '(' || s[i] == '[' || s[i] == ')' || s[i] == ']') {
					st.push(s[i]);
				}
			}
		}
		if (st.empty()) cout << "yes" << "\n";
		else cout << "no" << "\n";
	}
}