#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
#include <queue>
#include <memory.h>
#include <map>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        string s;
        cin >> s;
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (st.empty()) {
                st.push(s[i]);
            }
            else {
                if (st.top() == '(' && s[i] == ')') {
                    st.pop();
                }
                else st.push(s[i]);
            }
        }
        if (st.size() == 0) {
            cout << "YES" << "\n";
        }
        else cout << "NO" << "\n";
    }
}