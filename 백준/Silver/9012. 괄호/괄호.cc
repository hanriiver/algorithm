#include<bits/stdc++.h>
using namespace std; 
stack<char> st;

int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		 
		for (int i = 0; i< s.length(); i++) {
			if(st.empty())
				st.push(s.at(i));
			else {
				if (st.top() == s.at(i)) {
					st.push(s[i]);
				}
				else if (st.top() == '(' && s.at(i) == ')') {
					st.pop();
				}
				else st.push(s.at(i));
					
			}
		}
		if (st.empty()) cout << "YES" << "\n";
		else cout << "NO" << "\n";
		while (!st.empty()) {
			st.pop();
		}
	}

	 
}