#include <bits/stdc++.h>
using namespace std;
int r, c, k;
char arr[6][6];
int check[6][6];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
int ret;
void go(int y, int x) {
    if (y == 0 && x == c - 1) {
        if (check[y][x] == k) {
            ret++;
        }
        return;
    }
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= r || nx < 0 || nx >= c) continue;
        if (check[ny][nx] != 0 || arr[ny][nx] == 'T') continue;
        check[ny][nx] = check[y][x] + 1;
        go(ny, nx);
        check[ny][nx] = 0;
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> r >> c >> k;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> arr[i][j];
        }
    }
    check[r - 1][0] = 1;
    go(r - 1, 0);
    cout << ret;
}

