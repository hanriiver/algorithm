#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
#include <queue>
#include <memory.h>
using namespace std;
int n, m;
int arr[1001][1001];
queue<pair<int, int>> qu;
bool check[1001][1001];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int ans;
void bfs(int x, int y) {

    while (!qu.empty()) {
        int ox = qu.front().first;
        int oy = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + ox;
            int ny = dy[i] + oy;
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (arr[nx][ny] == 0 && !check[nx][ny]) {
                qu.push({ nx,ny });
                check[nx][ny] = true;
                arr[nx][ny] = arr[ox][oy] + 1;
                ans = arr[nx][ny];
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> m >> n;
    bool checking = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) checking = false;
            if (arr[i][j] == 1) {
                qu.push({ i,j });
                check[i][j] = true;
            }
        }
    }
    bfs(qu.front().first, qu.front().second);
    bool flag = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                flag = false;
                break;
            }
        }
    }
    if (checking) {
        cout << 0;
        return 0;
    }
    if (flag) {
        cout << ans - 1;
    }
    else cout << -1;
}
