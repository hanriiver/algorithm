#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        map<int, int> m1;
        map<int, int> m2;
        for (int i = 1; i <= n; i++) {
            int x;
            cin >> x;
            if (m1[x] == 0) {
                m1[x] = i;
            }
            m2[x] = i;
        }
        for (int i = 0; i < k; i++) {
            int s, e;
            cin >> s >> e;
            if (m1[s] == 0 || m2[s] == 0) {
                cout << "NO" << "\n";
                continue;
            }
            if (m1[s] <= m2[e]) {
                cout << "YES";
            }
            else {
                cout << "NO";
            }
            cout << "\n";
        }
    }
}