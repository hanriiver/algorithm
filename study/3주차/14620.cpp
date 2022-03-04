#include <bits/stdc++.h>
using namespace std;
int n;
int arr[11][11];
int v[11][11];
int dy[] = { -1,0,1,0 };
int dx[] = { 0,1,0,-1 };
int ret = 98765431;
bool check(int y, int x) {
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= n || nx < 0 || nx >= n) {
            return false;
        }
        if (v[ny][nx]) return false;
    }
    return true;
}

int _flower(int y, int x) {
    int sum = arr[y][x];
    v[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        v[ny][nx] = 1;
        sum += arr[ny][nx];
    }
    return sum;
}
void _clearv(int y, int x) {
    v[y][x] = 0;
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        v[ny][nx] = 0;
    }
}
void go(int y, int x, int cnt, int sum) {
    if (cnt == 3) {
        ret = min(ret, sum);
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j]) continue;
            if (check(i, j)) {
                int s = _flower(i, j);
                go(i, j, cnt + 1, sum + s);
                _clearv(i, j);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    go(0, 0, 0, 0);
    cout << ret;
}