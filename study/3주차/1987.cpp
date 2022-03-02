#include <bits/stdc++.h>
using namespace std;
int r, c;
bool check[100];
bool visited[21][21];
string arr[21];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int ret = -987654321;
void dfs(int y, int x, int cnt) {
    ret = max(ret, cnt);
    for (int i = 0; i < 4; i++) {
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if (ny < 0 || ny >= r || nx < 0 || nx >= c || visited[ny][nx]) continue;
        if (check[arr[ny][nx] - 'A']) {
            continue;
        }
        check[arr[ny][nx] - 'A'] = true;
        visited[ny][nx] = true;
        dfs(ny, nx, cnt + 1);
        visited[ny][nx] = false;
        check[arr[ny][nx] - 'A'] = false;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> r >> c;
    for (int i = 0; i < r; i++) {
        cin >> arr[i];
    }
    check[arr[0][0] - 'A'] = true;
    visited[0][0] = true;
    dfs(0, 0, 1);
    cout << ret;
}
