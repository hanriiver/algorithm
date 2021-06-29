#include <bits/stdc++.h>
using namespace std;
stack<int> st;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int k;
    long long answer = 0;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int n;
        cin >> n;
        if (st.empty() && n == 0) break;
        if (n == 0) {
            answer -= st.top();
            st.pop();
        }
        else {
            answer += n;
            st.push(n);
        }
    }
    cout << answer;
}