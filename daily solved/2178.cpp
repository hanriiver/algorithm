#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int n, m;
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
queue<pair<int, int>> qu;
int dist[101][101];
int arr[101][101];
void bfs(int y, int x) {
	dist[y][x] = 1;
	qu.push({ y,x });
	while (!qu.empty()) {
		int oy = qu.front().first;
		int ox = qu.front().second;
		qu.pop();
		for (int i = 0; i < 4; i++) {
			int ny = oy + dy[i];
			int nx = ox + dx[i];
			if (ny < 0 || ny>100 || nx < 0 || nx>100) continue;
			if (dist[ny][nx] == 0 && arr[ny][nx] == 1) {
				dist[ny][nx] = dist[oy][ox] + 1;
				qu.push({ ny,nx });
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < m; j++) {
			arr[i][j] = s[j] - '0';
		}
	}
	bfs(0, 0);
	cout << dist[n - 1][m - 1];
}
