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
int n, m;
bool check[101][101];
int arr[101][101];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
queue<pair<int, int>> qu1, qu2;
int last;
void bfs(int y, int x) {
    memset(check, false, sizeof(check));
    qu1.push({ y,x });
    check[y][x] = true;
    while (!qu1.empty()) {
        int oy = qu1.front().first;
        int ox = qu1.front().second;
        qu1.pop();
        for (int i = 0; i < 4; i++) {
            int ny = oy + dy[i];
            int nx = ox + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (!check[ny][nx] && arr[ny][nx] == 0) {
                qu1.push({ ny,nx });
            }
            if (!check[ny][nx] && arr[ny][nx] == 1) {
                qu2.push({ ny,nx });
            }
            check[ny][nx] = true;
        }
    }
    last = qu2.size();
    while (!qu2.empty()) {
        int oy = qu2.front().first;
        int ox = qu2.front().second;
        qu2.pop();
        arr[oy][ox] = 0;
    }

}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int ans = 0;
    while (true) {
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == 1) {
                    cnt++;
                }
            }
        }
        if (cnt == 0) break;
        bfs(0, 0);
        ans++;
    }
    cout << ans << "\n" << last;
}