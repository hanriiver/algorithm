#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
using namespace std;
vector<int> g[20001];
int check[20001];
void dfs(int index) {
	int size = g[index].size();
	for (int i = 0; i < size; i++) {
		int next = g[index][i];
		if (check[next] == 0) {
			if (check[index] == 1) {
				check[next] = 2;
			}
			else {
				check[next] = 1;
			}
			dfs(next);
		}
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
			g[x].push_back(y);
			g[y].push_back(x);
		}
		for (int i = 1; i <= v; i++) {
			if (check[i] == 0) {
				check[i] = 1;
				dfs(i);
			}
		}
		bool flag = true;
		for (int i = 1; i <= v; i++) {
			for (int j = 0; j < g[i].size(); j++) {
				if (check[i] == check[g[i][j]]) {
					flag = false;
					break;
				}
			}
		}
		if (flag) cout << "YES";
		else cout << "NO";
		cout << "\n";
		memset(g, 0, sizeof(g));
		memset(check, 0, sizeof(check));
	}
}