#include <bits/stdc++.h>
using namespace std;
int arr[11][11];
int ret = 987654321;
int color[6];
queue<pair<int, int>> qu;
bool check[11][11];
bool isMake(int y, int x, int size) {
    int ny = y + size;
    int nx = x + size;
    if (ny < 0 || ny > 10 || nx < 0 || nx > 10) return false;
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            if (arr[i][j] != 1) {
                return false;
            }
        }
    }
    return true;
}
void draw(int y, int x, int size, int c) {
    for (int i = y; i < y + size; i++) {
        for (int j = x; j < x + size; j++) {
            arr[i][j] = c;
        }
    }
}
void dfs(int y, int x, int cnt) {
    if (cnt >= ret) return;
    if (x == 10) {
        dfs(y + 1, 0, cnt);
        return;
    }
    if (y == 10) {
        ret = min(cnt, ret);
        return;
    }
    if (arr[y][x] == 0) {
        dfs(y, x + 1, cnt);
        return;
    }
    for (int len = 5; len > 0; len--) {
        if (color[len] == 5) continue;
        if (isMake(y, x, len)) {
            color[len]++;
            draw(y, x, len, 0);
            dfs(y, x + len, cnt + 1);
            draw(y, x, len, 1);
            color[len]--;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int onecnt = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 1) {
                onecnt++;
            }
        }
    }
    if (onecnt == 0) cout << 0;
    else {
        dfs(0, 0, 0);
        if (ret == 987654321) {
            cout << -1;
        }
        else cout << ret;
    }
}