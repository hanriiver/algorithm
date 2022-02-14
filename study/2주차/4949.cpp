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
    while (1) {
        string s;
        stack<char> st;
        getline(cin, s);
        if (s == ".") break;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == ')' || s[i] == '[' || s[i] == ']') {
                if (st.empty()) st.push(s[i]);
                else {
                    if (st.top() == '(' && s[i] == ')') {
                        st.pop();
                    }
                    else if (st.top() == '[' && s[i] == ']') {
                        st.pop();
                    }
                    else {
                        st.push(s[i]);
                    }
                }
            }
        }
        if (st.empty()) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }

}