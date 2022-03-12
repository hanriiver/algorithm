#include <bits/stdc++.h>
using namespace std;
const int INF = 987654321;
int n, mp, mf, ms, mv;
int p, f, s, v, sum;
int ret = INF;
map<int, vector<vector<int>>> m;
struct A {
    int mp, mf, ms, mv, cost;
} a[16];
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n;
    cin >> n;
    cin >> mp >> mf >> ms >> mv;
    for (int i = 0; i < n; i++) {
        cin >> a[i].mp >> a[i].mf >> a[i].ms >> a[i].mv >> a[i].cost;
    }
    for (int i = 1; i < (1 << n); i++) {
        p = f = s = v = sum = 0;
        vector<int> vv;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                vv.push_back(j + 1);
                p += a[j].mp;
                f += a[j].mf;
                s += a[j].ms;
                v += a[j].mv;
                sum += a[j].cost;
            }
        }
        if (p >= mp && f >= mf && s >= ms && v >= mv) {
            if (ret >= sum) {
                ret = sum;
                m[ret].push_back(vv);
            }
        }
    }
    if (ret == INF) {
        cout << -1;
    }
    else {
        sort(m[ret].begin(), m[ret].end());
        cout << ret << "\n";
        for (int i = 0; i < m[ret][0].size(); i++) {
            cout << m[ret][0][i] << " ";
        }
    }

}