#include <iostream>
#include <limits.h>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int n, m;
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
char arr[101][101];
int dist[101][101];
bool check[101][101];
deque<pair<int, int>> dq;

void bfs(int x, int y) {
	dq.push_back({ x,y });
	while (!dq.empty()) {
		int ox = dq.front().first;
		int oy = dq.front().second;
		dq.pop_front();
		for (int i = 0; i < 4; i++) {
			int nx = ox + dx[i];
			int ny = oy + dy[i];
			if (nx<1 || nx>n || ny<1 || ny>m) continue;
			if (arr[nx][ny] - '0' == 0 && !check[nx][ny]) {
				check[nx][ny] = true;
				dq.push_front({ nx,ny });
				dist[nx][ny] = dist[ox][oy];
			}
			if (arr[nx][ny] - '0' == 1 && !check[nx][ny]) {
				check[nx][ny] = true;
				dq.push_back({ nx,ny });
				dist[nx][ny] = dist[ox][oy] + 1;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			cin >> arr[i][j];
		}
	}
	bfs(1, 1);
	cout << dist[n][m];
}