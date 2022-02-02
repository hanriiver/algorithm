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
int arr[101][101];
int n, m;
queue<pair<int, int>> qu;
bool check[101][101];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
void bfs(int x, int y) {
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
            if (!check[nx][ny] && arr[nx][ny] == 1) {
                qu.push({ nx,ny });
                arr[nx][ny] = arr[ox][oy] + 1;
                check[nx][ny] = true;
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
