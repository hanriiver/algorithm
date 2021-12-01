#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
vector<int> g[1001];
bool check[1001];
void dfs(int x) {
	check[x] = true;
	for (int i = 0; i < g[x].size(); i++) {
		int next = g[x][i];
		if (check[next]) continue;
		check[next] = true;
		dfs(next);
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int n, ans = 0;
		cin >> n;
		for (int i = 1; i <= n; i++) {
			int y;
			cin >> y;
			g[i].push_back(y);
		}
		for (int i = 1; i <= n; i++) {
			if (check[i]) continue;
			dfs(i);
			ans++;
		}
		cout << ans << "\n";
		memset(g, 0, sizeof(g));
		memset(check, false, sizeof(check));
	}
}
