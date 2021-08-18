#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int n, m, cnt;
int arr[1001][1001];
int dist[1001][1001];
bool check[1001][1001];
int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
queue<pair<int, int>> qu;
void bfs() {
	while (!qu.empty()) {
		int ox = qu.front().first;
		int oy = qu.front().second;
		qu.pop();
		for (int i = 0; i < 4; i++) {
			int nx = ox + dx[i];
			int ny = oy + dy[i];
			if (nx<0 || nx>n - 1 || ny<0 || ny>m - 1) continue;

			if (arr[nx][ny] == 0 && !check[nx][ny]) {
				check[nx][ny] = true;
				qu.push({ nx,ny });
				dist[nx][ny] = dist[ox][oy] + 1;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == 1) {
				qu.push({ i,j });
				dist[i][j] = 1;
			}
			else if (arr[i][j] == -1) {
				dist[i][j] = -1;
			}
		}
	}
	bfs();
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] == 0)
			{
				cout << "-1";
				return 0;
			}
			if (cnt < dist[i][j]) cnt = dist[i][j];
		}
	}
	cout << cnt - 1;
}