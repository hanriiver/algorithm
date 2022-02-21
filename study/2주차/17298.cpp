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
stack<int> st;
int arr[1000001], dp[1000001];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    memset(dp, -1, sizeof(dp));
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        while (!st.empty() && arr[st.top()] < arr[i]) {
            dp[st.top()] = arr[i];
            st.pop();
        }
        st.push(i);
    }
    for (int i = 1; i <= n; i++) {
        cout << dp[i] << " ";
    }
}