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
int arr[2];
int ans;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        stack<char> st;
        for (char a : s) {
            if (st.empty()) st.push(a);
            else if (st.top() == a) {
                st.pop();
            }
            else st.push(a);
        }
        if (st.empty()) {
            ans++;
        }
    }
    cout << ans;
}