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
int dx[8] = { 1,2,-1,-2,1,2,-1,-2 };
int dy[8] = { 2,1,2,1,-2,-1,-2,-1 };
int check[301][301];
int tx, ty;
int l;

int bfs(int x, int y) {
    queue<pair<int, int>> qu;
    memset(check, 0, sizeof(check));
    check[x][y] = 1;
    qu.push({ x,y });
    while (!qu.empty()) {
        int ox = qu.front().first;
        int oy = qu.front().second;
        qu.pop();
        if (ox == tx && oy == ty) {
            return check[ox][oy] - 1;
        }

        for (int i = 0; i < 8; i++) {
            int nx = ox + dx[i];
            int ny = oy + dy[i];
            if (nx < 0 || nx >= l || ny < 0 || ny >= l) continue;
            if (!check[nx][ny]) {
                check[nx][ny] = check[ox][oy] + 1;
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
        cin >> l;
        int x, y;
        cin >> x >> y;
        cin >> tx >> ty;
        cout << bfs(x, y) << "\n";
    }
}