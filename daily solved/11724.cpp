#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int n, m, ans;
vector<int> g[1001];
bool check[1001];
void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < g[x].size(); i++) {
		int node = g[x][i];
		if (check[node]) continue;
		check[node] = true;
		dfs(node);
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dfs(i);
			ans++;
		}
	}
	cout << ans;
}
