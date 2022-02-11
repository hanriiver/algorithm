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
int arr[101][101];
bool check[101][101];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,-1,0,1 };
void dfs(int y, int x, int water) {
    check[y][x] = 1;
    for (int i = 0; i < 4; i++) {
        int ny = dy[i] + y;
        int nx = dx[i] + x;
        if (ny < 0 || ny >= n || nx < 0 || nx >= n) continue;
        if (arr[ny][nx] > water && !check[ny][nx]) {
            check[ny][nx] = true;
            dfs(ny, nx, water);
        }
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    int top = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
            top = max(top, arr[i][j]);
        }
    }
    int k = 0, ans = 0;
    while (k <= top) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i][j] > k && !check[i][j]) {
                    dfs(i, j, k);
                    temp++;
                }
            }
        }
        ans = max(ans, temp);
        k++;
        memset(check, false, sizeof(check));
    }
    cout << ans;
}