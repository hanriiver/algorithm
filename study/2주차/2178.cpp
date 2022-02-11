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
int arr[101][101];
bool check[101][101];
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
                arr[ny][nx] = arr[oy][ox] + 1;
                qu.push({ ny,nx });
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j < m; j++) {
            arr[i][j] = s[j] - '0';
        }
    }
    bfs(0, 0);
    cout << arr[n - 1][m - 1];

}