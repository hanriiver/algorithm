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
// 10709번 : 기상캐스터
string arr[101];
int check[101][101];
int h, w;
void dfs(int y, int x) {
    if (y < 0 || y >= h || x < 0 || x >= w) return;
    if (x == w - 1) return;
    if (check[y][x + 1] == -1 && arr[y][x + 1] == '.') {
        check[y][x + 1] = check[y][x] + 1;
        dfs(y, x + 1);
    }
    return;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> h >> w;
    memset(check, -1, sizeof(check));
    for (int i = 0; i < h; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (arr[i][j] == 'c' && check[i][j] == -1) {
                check[i][j] = 0;
                dfs(i, j);
            }
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            cout << check[i][j] << " ";
        }
        cout << "\n";
    }
}