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
int m, n, k;
int arr[101][101];
bool check[101][101];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
int ret;
vector<int> ans;
void dfs(int y, int x) {
    check[y][x] = true;

    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny < 0 || ny >= m || nx < 0 || nx >= n) continue;
        if (arr[ny][nx] == 0 && !check[ny][nx]) {
            ret++;
            dfs(ny, nx);
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> m >> n >> k;
    while (k--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for (int i = y1; i < y2; i++) {
            for (int j = x1; j < x2; j++) {
                arr[i][j] = 1;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == 0 && !check[i][j]) {
                ret = 0;
                dfs(i, j);
                ans.push_back(ret);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto k : ans) {
        cout << k + 1 << " ";
    }
}