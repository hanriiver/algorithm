#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int n, m;
int arr[101][101];
int dist[101][101];
bool check[101][101];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
queue<pair<int, int>> qu;
void bfs(int x, int y) {
	qu.push({ x,y });
	check[x][y] = true;
	dist[x][y] = 1;
	while (!qu.empty()) {
		int ox = qu.front().first;
		int oy = qu.front().second;
		qu.pop();
		for (int i = 0; i < 4; i++) {
			int nx = ox + dx[i];
			int ny = oy + dy[i];
			if (nx<0 || nx>n - 1 || ny<0 || nx>n - 1) continue;
			if (arr[nx][ny] == 1 && !check[nx][ny]) {
				qu.push({ nx,ny });
				check[nx][ny] = true;
				dist[nx][ny] = dist[ox][oy] + 1;
			}
		}
	}
}
int main() {
	//ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	bfs(0, 0);
	printf("%d", dist[n - 1][m - 1]);
}