#include <bits/stdc++.h>
using namespace std;

int n, m, x_x1, y_y1, x_x2, y_y2;
string arr[301];
int check[301][301];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int>> qu, q;
void bfs(int y, int x) {
    qu.push({ y,x });
    check[y][x] = 0;
    int cnt = 0;
    while (arr[x_x2 - 1][y_y2 - 1] != '0') {
        cnt++;
        while (!qu.empty()) {
            int oy = qu.front().first;
            int ox = qu.front().second;
            qu.pop();
            for (int i = 0; i < 4; i++) {
                int ny = oy + dy[i];
                int nx = ox + dx[i];
                if (ny < 0 || ny >= n || nx < 0 || nx >= m || check[ny][nx]) continue;
                check[ny][nx] = cnt;
                if (arr[ny][nx] != '0') {
                    arr[ny][nx] = '0';
                    q.push({ ny,nx });
                }
                else {
                    qu.push({ ny,nx });
                }
            }
        }
        qu = q;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m >> x_x1 >> y_y1 >> x_x2 >> y_y2;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bfs(x_x1 - 1, y_y1 - 1);
    cout << check[x_x2 - 1][y_y2 - 1];
}
