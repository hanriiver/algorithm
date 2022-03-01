#include <bits/stdc++.h>
using namespace std;
int n, k;
int check[2][500001];
queue<pair<int, int>> qu;
int cal(int num, int index) {
    if (index == 0) return num + 1;
    if (index == 1) return num - 1;
    if (index == 2) return num * 2;
}
void go(int start) {
    check[0][k] = 1;
    qu.push({ start,0 });
    while (!qu.empty()) {
        int ox = qu.front().first;
        int ot = qu.front().second;
        qu.pop();
        for (int i = 0; i < 3; i++) {
            int nx = cal(ox, i);
            int nt = ot + 1;
            if (nx < 0 || nx>500000) continue;
            if (check[nt % 2][nx] != -1) continue;
            check[nt % 2][nx] = nt;
            qu.push({ nx,nt });
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    memset(check, -1, sizeof(check));
    if (n == k) {
        cout << 0;
        return 0;
    }
    go(n);
    for (int i = 0; i <= 500000; i++) {
        int y = k + (i * (i + 1) / 2);
        if (y > 500000) break;
        if (check[i % 2][y] != -1 && check[i % 2][y] <= i) {
            cout << i;
            return 0;
        }
    }
    cout << -1;
}
