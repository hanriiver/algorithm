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
vector<int> v[101];
bool check[101];
int ans;
int n, m;
void dfs(int x) {
    check[x] = true;
    for (int i = 0; i < v[x].size(); i++) {
        int next = v[x][i];
        if (check[next]) continue;
        check[next] = true;
        ans++;
        dfs(next);
    }
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1);
    cout << ans;
}