#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <memory.h>
using namespace std;
vector<int> g[101];
bool check[101];
int temp;
void dfs(int index, int goal, int deth) {
	check[index] = true;
	if (index == goal) {
		temp += deth;
		return;
	}
	for (int i = 0; i < g[index].size(); i++) {
		int next = g[index][i];
		if (check[next]) continue;
		check[next] = true;
		dfs(next, goal, deth + 1);
		check[next] = false;
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, m;
	int ans = 987654321;
	int people = 0;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		g[x].push_back(y);
		g[y].push_back(x);
	}
	for (int i = 1; i <= n; i++) {

		memset(check, false, sizeof(check));
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			dfs(i, j, 0);
		}
		if (ans > temp) {
			ans = temp;
			people = i;
		}
		else if (ans == temp) {
			people = min(people, i);
		}
		temp = 0;
	}
	cout << people;

}
