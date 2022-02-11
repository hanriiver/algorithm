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
#include <map>
using namespace std;
int n, m, k;
int arr[51][51];
bool check[51][51];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int>> qu;
void bfs(int y, int x) {
    qu.push({ y,x });
    check[y][x] = true;
    while (!qu.empty()) {
        int oy = qu.front().first;
        int ox = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int ny = dy[i] + oy;
            int nx = dx[i] + ox;
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (arr[ny][nx] == 1 && !check[ny][nx]) {
                check[ny][nx] = true;
                qu.push({ ny,nx });
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int ans = 0;
        cin >> m >> n >> k;
        for (int i = 0; i < k; i++) {
            int x, y;
            cin >> x >> y;
            arr[y][x] = 1;
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1 && !check[i][j]) {
                    bfs(i, j);
                    ans++;
                }
            }
        }
        cout << ans << "\n";
        memset(check, false, sizeof(check));
        memset(arr, 0, sizeof(arr));
    }

}