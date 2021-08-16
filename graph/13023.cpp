#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
vector<int> g[2000];
bool visted[2000], answer;

void dfs(int index, int cnt) {
	if (cnt == 5) {
		answer = true;
		return;
	}
	visted[index] = true;
	for (int i = 0; i < g[index].size(); i++) {
		int next = g[index][i];
		if (visted[next]) continue;
		visted[next] = true;
		dfs(next, cnt + 1);
		if (answer) return;
	}
	visted[index] = false;
	return;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < m; i++) { // 양방향 설정
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for (int i = 0; i < n; i++) {
		dfs(i, 1);
		if (answer) {
			cout << "1";
			return 0;
		}
	}
	cout << "0";
}