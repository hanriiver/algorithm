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
int check[20001];
vector<int> v1[20001];
void dfs(int x) {
    for (int i = 0; i < v1[x].size(); i++) {
        int next = v1[x][i];
        if (check[next]) continue;
        if (check[x] == 1) {
            check[next] = 2;
        }
        if (check[x] == 2) {
            check[next] = 1;
        }
        dfs(next);

    }
}
int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        int v, e;
        cin >> v >> e;
        for (int i = 0; i < e; i++) {
            int x, y;
            cin >> x >> y;
            v1[x].push_back(y);
            v1[y].push_back(x);
        }
        for (int i = 1; i <= v; i++) {
            if (check[i]) continue;
            check[i] = 1;
            dfs(i);
        }
        bool flag = true;
        for (int i = 0; i < v; i++) {
            for (int j = 0; j < v1[i].size(); j++) {
                if (check[i] == check[v1[i][j]]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) cout << "YES" << "\n";
        else cout << "NO" << "\n";
        memset(check, 0, sizeof(check));
        memset(v1, 0, sizeof(v1));
    }
}