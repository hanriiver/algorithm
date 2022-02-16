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
vector<int> g[10001];
bool check[10001];
int death;
vector<int> ans;
int dfs(int x) {
    check[x] = true;
    for (int i = 0; i < g[x].size(); i++) {
        int node = g[x][i];
        if (check[node]) continue;
        check[node] = true;
        death += dfs(node);
    }
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        g[y].push_back(x);
    }
    int ret = 0;
    for (int i = 1; i <= n; i++) {
        dfs(i);
        if (ret == death) {
            ans.push_back(i);
        }
        if (ret < death) {
            ret = death;
            ans.clear();
            ans.push_back(i);
        }
        death = 0;
        memset(check, false, sizeof(check));
    }
    sort(ans.begin(), ans.end());
    for (auto k : ans) {
        cout << k << " ";
    }
}