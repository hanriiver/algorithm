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
int arr[9][9];
bool check[9][9];
bool changecheck[9][9];
queue<pair<int, int>> qu;
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int ret, zerocnt;
int bfs() {
    queue<pair<int, int>> qutemp = qu;

    int cnt = 0;
    while (!qutemp.empty()) {
        int oy = qutemp.front().first;
        int ox = qutemp.front().second;
        qutemp.pop();
        for (int i = 0; i < 4; i++) {
            int ny = oy + dy[i];
            int nx = ox + dx[i];
            if (ny < 0 || ny >= n || nx < 0 || nx >= m) continue;
            if (arr[ny][nx] == 0 && !check[ny][nx]) {
                check[ny][nx] = true;
                qutemp.push({ ny,nx });
                cnt++;
            }
        }
    }
    return zerocnt - cnt - 3;
}
void go(int cnt) {
    if (cnt == 3) {
        int temp = bfs();
        ret = max(ret, temp);
        memset(check, false, sizeof(check));
        return;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0 && !changecheck[i][j]) {
                arr[i][j] = 1;
                changecheck[i][j] = true;
                go(cnt + 1);
                arr[i][j] = 0;
                changecheck[i][j] = false;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
            if (arr[i][j] == 0) {
                zerocnt++;
            }
            if (arr[i][j] == 2) {
                qu.push({ i,j });
            }
        }
    }
    go(0);
    cout << ret << "\n";
}