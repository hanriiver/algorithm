#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int e, s, m;
    int te = 1, ts = 1, tm = 1;
    int ans = 1;
    cin >> e >> s >> m;
    while (1) {
        if (te == e && ts == s && tm == m) {
            cout << ans;
            break;
        }
        if (te > 15) {
            te = 1;
            continue;
        }
        if (ts > 28) {
            ts = 1;
            continue;
        }
        if (tm > 19) {
            tm = 1;
            continue;
        }
        te++;
        ts++;
        tm++;
        ans++;
    }
}