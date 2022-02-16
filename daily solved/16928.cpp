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
queue<int> qu;
int check[101];
int arr[101];
int dx[] = { 1,2,3,4,5,6 };
int ret;
void bfs() {
    qu.push(1);
    check[1] = 1;
    while (!qu.empty()) {
        int ox = qu.front();
        qu.pop();
        if (ox == 100) {
            cout << check[ox] - 1;
            return;
        }
        for (int i = 0; i < 6; i++) {
            int nx = ox + dx[i];
            if (nx > 100) continue;
            if (arr[nx] != 0 && check[arr[nx]] == 0) {
                check[arr[nx]] = check[ox] + 1;
                qu.push(arr[nx]);
            }
            if (arr[nx] == 0 && check[nx] == 0) {
                check[nx] = check[ox] + 1;
                qu.push(nx);
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;
        arr[x] = y;
    }
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        arr[x] = y;
    }
    bfs();

}