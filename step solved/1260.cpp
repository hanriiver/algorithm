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
int n, m, v;
vector<int> v1[1001];
queue<int> qu;
bool check[1001];
void dfs(int x) {
    check[x] = true;
    cout << x << " ";
    for (int i = 0; i < v1[x].size(); i++) {
        int node = v1[x][i];
        if (check[node]) continue;
        check[node] = true;
        dfs(node);
    }
    return;
}
void bfs(int x) {
    memset(check, false, sizeof(check));
    qu.push(x);
    check[x] = true;
    while (!qu.empty()) {
        int node = qu.front();
        qu.pop();
        cout << node << " ";
        for (int i = 0; i < v1[node].size(); i++) {
            int next = v1[node][i];
            if (check[next]) continue;
            check[next] = true;
            qu.push(next);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m >> v;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        v1[x].push_back(y);
        v1[y].push_back(x);
    }
    for (int i = 1; i <= n; i++) sort(v1[i].begin(), v1[i].end());
    dfs(v);
    cout << "\n";
    bfs(v);
}