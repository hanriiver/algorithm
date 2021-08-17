#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
using namespace std;
int n, m, v;
vector<int> g[1001];
bool check[1001];
queue<int> qu;
void dfs(int index) {
	check[index] = true;
	cout << index << " ";
	for (int i = 0; i < g[index].size(); i++) {
		int next = g[index][i];
		if (check[next]) continue;
		check[next] = true;
		dfs(next);
	}
	return;
}
void bfs(int index) {
	memset(check, false, sizeof(check));
	check[index] = true;
	qu.push(index);
	while (!qu.empty()) {
		int node = qu.front();
		qu.pop();
		cout << node << " ";
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
	cin >> n >> m >> v;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) sort(g[i].begin(), g[i].end());
	dfs(v);
	cout << "\n";
	bfs(v);
}