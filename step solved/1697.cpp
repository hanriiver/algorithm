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
queue<int> qu;
int arr[200001];
int n, k;
void bfs(int x) {
    qu.push(x);
    arr[x] = 1;
    while (!qu.empty()) {
        int ox = qu.front();
        qu.pop();
        if (ox - 1 >= 0) {
            int nx = ox - 1;
            if (arr[nx] == 0) {
                qu.push(nx);
                arr[nx] = arr[ox] + 1;
            }
        }
        if (ox + 1 <= 200000) {
            int nx = ox + 1;
            if (arr[nx] == 0) {
                qu.push(nx);
                arr[nx] = arr[ox] + 1;
            }
        }
        if (ox * 2 <= 200000) {
            int nx = ox * 2;
            if (arr[nx] == 0) {
                qu.push(nx);
                arr[nx] = arr[ox] + 1;
            }
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> k;
    bfs(n);
    cin >> n >> k;
    cout << arr[k] - 1;
}
