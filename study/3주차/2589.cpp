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
string arr[51];
int n, m;
int check[51][51];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int ans;
void bfs(int y, int x) {
    queue<pair<int, int>> qu;
    qu.push({ y,x });
    check[y][x] = 0;
    while (!qu.empty()) {
        int oy = qu.front().first;
        int ox = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int ny = dy[i] + oy;
            int nx = dx[i] + ox;
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (arr[ny][nx] == 'L' && check[ny][nx] == -1) {
                qu.push({ ny,nx });
                check[ny][nx] = check[oy][ox] + 1;
                ans = max(ans, check[ny][nx]);
            }
        }

    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    memset(check, -1, sizeof(check));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 'L') {
                bfs(i, j);
                memset(check, -1, sizeof(check));
            }
        }
    }
    cout << ans;
}