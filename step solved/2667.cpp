#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
#include <limits.h>
#include <memory.h>
using namespace std;
string arr[26];
int n;
queue<pair<int, int>> qu;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
bool check[26][26];
vector<int> ans;
void bfs(int x, int y) {
    int answer = 0;
    qu.push({ x,y });
    check[x][y] = true;
    while (!qu.empty()) {
        int ox = qu.front().first;
        int oy = qu.front().second;
        qu.pop();
        for (int i = 0; i < 4; i++) {
            int nx = dx[i] + ox;
            int ny = dy[i] + oy;
            if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
            if (check[nx][ny]) continue;
            check[nx][ny] = true;
            if (arr[nx][ny] == '1') {
                qu.push({ nx,ny });
                answer++;
            }
        }
    }
    ans.push_back(answer);
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] == '1' && !check[i][j]) {
                bfs(i, j);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (int i = 0; i < ans.size(); i++) cout << ans[i] + 1 << "\n";
}