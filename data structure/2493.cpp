#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;
stack<pair<int, int>> st;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int height;
        cin >> height;
        while (!st.empty()) {
            if (st.top().second > height) {
                cout << st.top().first << " ";
                break;
            }
            st.pop();
        }
        if (st.empty()) cout << "0" << " ";
        st.push({ i,height });
    }

}