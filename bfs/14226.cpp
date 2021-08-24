#include <iostream>
#include <limits.h>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int dist[2001][2001];
int n;
queue<pair<int, int>> qu;

void bfs(int x, int y) {
	qu.push({ x,y });
	while (!qu.empty()) {
		int ox = qu.front().first;
		int oy = qu.front().second;
		qu.pop();
		if (dist[ox][ox] == 0) {
			qu.push({ ox,ox });
			dist[ox][ox] = dist[ox][oy] + 1;
		}
		if (dist[ox + oy][oy] == 0 && ox + oy <= n) {
			qu.push({ ox + oy,oy });
			dist[ox + oy][oy] = dist[ox][oy] + 1;
		}
		if (dist[ox - 1][oy] == 0 && ox - 1 >= 2) {
			qu.push({ ox - 1,oy });
			dist[ox - 1][oy] = dist[ox][oy] + 1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n;
	bfs(1, 0);
	int ans = INT_MAX;
	for (int i = 0; i <= n; i++) {
		if (dist[n][i] != 0) {
			ans = min(ans, dist[n][i]);
		}
	}
	cout << ans;
}