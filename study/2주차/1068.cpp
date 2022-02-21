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
vector<int> v[51];
int n, m;
int ans;
void dfs(int here, int parent) {
    int cnt = 0;
    for (int i = 0; i < v[here].size(); i++) {
        int node = v[here][i];
        if (node == parent) continue;
        if (node == m) continue;
        cnt++;
        dfs(node, here);
    }
    if (cnt == 0) {
        ans++;
    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    cin >> n;
    int root = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x == -1) root = i;
        else {
            v[x].push_back(i);
            v[i].push_back(x);
        }
    }
    cin >> m;
    if (root == m) {
        cout << 0;
        return 0;
    }
    else {
        dfs(root, -1);
        cout << ans;
    }
}