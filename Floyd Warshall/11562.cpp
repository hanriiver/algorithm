#include <bits/stdc++.h>
using namespace std;
int n, m, u, v, b, k;
int d[251][251];
const int INF = 987654321;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == j) continue;
            d[i][j] = INF;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> b;
        if (b == 0) d[u][v] = 0, d[v][u] = 1;
        else d[u][v] = 0, d[v][u] = 0;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
            }
        }
    }
    int k;
    cin >> k;
    while (k--) {
        int s, e;
        cin >> s >> e;
        cout << d[s][e] << "\n";
    }
}