#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
using namespace std;
int n, m;
vector<int> g[1001];
bool check[1001];
queue<int> qu;
void bfs(int index) {
	check[index] = true;
	qu.push(index);
	while (!qu.empty()) {
		int node = qu.front();
		qu.pop();
		for (int i = 0; i < g[node].size(); i++) {
			int next = g[node][i];
			if (check[next]) continue;
			check[next] = true;
			qu.push(next);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			bfs(i);
			ans++;
		}
	}
	cout << ans;
}
/////////////////////////////////////////////////////////////////
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
using namespace std;
int n, m;
vector<int> g[1001];
bool check[1001];
void dfs(int index) {
	check[index] = true;
	for (int i = 0; i < g[index].size(); i++) {
		int next = g[index][i];
		if (check[next]) continue;
		check[next] = true;
		dfs(next);
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
	int ans = 0;
	for (int i = 1; i <= n; i++) {
		if (!check[i]) {
			dfs(i);
			ans++;
		}
	}
	cout << ans;
}