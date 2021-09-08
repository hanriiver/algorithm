#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v[100];
bool check[101];
int n, e, ans;
void dfs(int x) {
	ans++;
	check[x] = true;
	for (int i = 0; i < v[x].size(); i++) {
		int next = v[x][i];
		if (check[next]) continue;
		check[next] = true;
		dfs(next);
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> e;
	for (int i = 0; i < e; i++) {
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}
	dfs(1);
	cout << ans - 1;
}