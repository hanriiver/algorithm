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
int arr[51][51];
queue<pair<int, int>> qu;
bool check[51][51];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
void bfs(int x, int y, int n, int m) {
    qu.push({ x,y });
    check[x][y] = true;
    while (!qu.empty()) {
        int ox = qu.front().first;
        int oy = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + ox;
            int ny = dy[i] + oy;
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (check[nx][ny]) continue;
            check[nx][ny] = true;
            if (arr[nx][ny] == 1) {
                qu.push({ nx,ny });
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int m, n, k, cnt = 0;
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1 && !check[i][j]) {
                    bfs(i, j, n, m);
                    cnt++;
                }
            }
        }
        cout << cnt << "\n";
        memset(check, false, sizeof(check));
        memset(arr, 0, sizeof(arr));
    }
}
