#include <bits/stdc++.h>
using namespace std;
int r, c;
string arr[1001];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int d[1001][1001];
int d1[1001][1001];
queue<pair<int, int>> q, qu;
int bfs() { //주인공 이동
    while (!q.empty()) {
        int oy = q.front().first;
        int ox = q.front().second;
        q.pop();
        for (int i = 0; i < 4; i++) {
            int ny = oy + dy[i];
            int nx = ox + dx[i];
            if (ny < 0 || ny >= r || nx < 0 || nx >= c) {
                return d1[oy][ox];
            }
            if (arr[ny][nx] == '#' || d1[ny][nx]) continue;
            if (d1[oy][ox] + 1 >= d[ny][nx] && d[ny][nx]) continue;
            d1[ny][nx] = d1[oy][ox] + 1;
            q.push({ ny,nx });
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        cin >> arr[i];
        for (int j = 0; j < c; j++) {
            if (arr[i][j] == 'J') {
                d1[i][j] = 1;
                q.push({ i,j });
            }
            if (arr[i][j] == 'F') {
                d[i][j] = 1;
                qu.push({ i,j });
            }
        }
    }
    // 불 번짐
    while (!qu.empty()) {
        int oy = qu.front().first;
        int ox = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int ny = oy + dy[i];
            int nx = ox + dx[i];
            if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
            if (d[ny][nx] || arr[ny][nx] == '#') continue;
            d[ny][nx] = d[oy][ox] + 1;
            qu.push({ ny,nx });
        }
    }

    int ret = bfs();
    if (ret == -1) cout << "IMPOSSIBLE";
    else cout << ret;
}