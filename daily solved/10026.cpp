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
int n;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int>> qu;
bool check[101][101];
string arr[101];
int ans;
int ret;
void bfs(int y, int x, char color) {
    qu.push({ y,x });
    check[y][x] = true;
    while (!qu.empty()) {
        int oy = qu.front().first;
        int ox = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int ny = oy + dy[i];
            int nx = ox + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
            if (!check[ny][nx] && arr[ny][nx] == color) {
                check[ny][nx] = true;
                qu.push({ ny,nx });
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        arr[i] = s;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!check[i][j]) {
                bfs(i, j, arr[i][j]);
                ans++;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 'G') {
                arr[i][j] = 'R';
            }
        }
    }
    memset(check, false, sizeof(check));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!check[i][j]) {
                bfs(i, j, arr[i][j]);
                ret++;
            }
        }
    }
    cout << ans << " " << ret;
}