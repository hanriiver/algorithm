#include <bits/stdc++.h>
using namespace std;
map<int, int> m1;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        m1[x]++;
    }
    for (int i = 0; i < m; i++) {
        int y;
        cin >> y;
        if (m1[y]) {
            cnt++;
        }
    }
    cout << (n - cnt) + (m - cnt);
}