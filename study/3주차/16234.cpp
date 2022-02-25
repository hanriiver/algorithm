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
int n, l, r;
int arr[51][51];
bool check[51][51];
int dx[] = { -1,0,1,0 };
int dy[] = { 0,1,0,-1 };
int ret;
bool flag;
void bfs(int y, int x) {
    queue<pair<int, int>> q, qu;
    q.push({ y,x });
    qu.push({ y,x });
    check[y][x] = true;
    int sum = 0;
    int cnt = 0;
    while (!qu.empty()) {
        int oy = qu.front().first;
        int ox = qu.front().second;
        qu.pop();
        sum += arr[oy][ox];
        cnt += 1;
        for (int i = 0; i < 4; i++) {
            int ny = dy[i] + oy;
            int nx = dx[i] + ox;
            int diff = abs(arr[ny][nx] - arr[oy][ox]);
            if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
            if (diff >= l && diff <= r && !check[ny][nx]) {
                check[ny][nx] = true;
                q.push({ ny,nx });
                qu.push({ ny,nx });
                flag = true;
            }
        }
    }
    int newPeople = sum / cnt;
    if (flag) {
        while (!q.empty()) {
            int my = q.front().first;
            int mx = q.front().second;
            q.pop();
            arr[my][mx] = newPeople;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> l >> r;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    while (true) {
        flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!check[i][j]) {
                    bfs(i, j);
                }
            }
        }
        if (flag) {
            memset(check, false, sizeof(check));
            ret++;
        }
        else break;
    }
    cout << ret;
}