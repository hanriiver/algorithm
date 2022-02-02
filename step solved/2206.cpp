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
int check[1001][1001][2];
queue<pair<pair<int, int>, int>> qu;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
int bfs() {
    while (!qu.empty()) {
        int ox = qu.front().first.first;
        int oy = qu.front().first.second;
        int ob = qu.front().second;
        if (ox == n - 1 && oy == m - 1) {
            return check[ox][oy][ob];
        }
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + ox;
            int ny = dy[i] + oy;
            int nb = ob;
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
            if (arr[nx][ny] == 0 && !check[nx][ny][nb]) {
                check[nx][ny][nb] = check[ox][oy][ob] + 1;
                qu.push({ {nx,ny},nb });
            }
            if (arr[nx][ny] == 1 && nb == 0) {
                nb = 1;
                check[nx][ny][nb] = check[ox][oy][ob] + 1;
                qu.push({ {nx,ny},nb });
            }
        }
    }
    return -1;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        for (int j = 0; j <= m; j++) {
            if (s[j] == ' ') continue;
            arr[i][j] = s[j] - '0';
        }
    }
    qu.push({ {0,0},0 });
    check[0][0][0] = 1;
    cout << bfs();
}