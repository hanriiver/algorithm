#include <bits/stdc++.h>
using namespace std;
map<string, int> m1;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m1[s]++;
    }
    int ans = 0;
    for (int i = 0; i < m; i++) {
        string s;
        cin >> s;
        if (m1[s] == 1) ans++;
    }
    cout << ans;

}