#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
int arr[51][51];
bool check[51][51];
int dx[8] = { 0,-1,0,1,1,1,-1,-1 };
int dy[8] = { 1,0,-1,0,1,-1,-1,1 };
queue <pair<int, int>> qu;
void bfs(int y, int x, int w, int h) {
	qu.push({ y,x });
	check[y][x] = true;
	while (!qu.empty()) {
		int oy = qu.front().first;
		int ox = qu.front().second;
		qu.pop();
		for (int i = 0; i < 8; i++) {
			int ny = oy + dy[i];
			int nx = ox + dx[i];
			if (ny < 0 || ny >= h || nx < 0 || nx >= w) continue;
			if (!check[ny][nx] && arr[ny][nx] == 1) {
				check[ny][nx] = true;
				qu.push({ ny,nx });
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	while (1) {
		int w, h, ans = 0;
		cin >> w >> h;
		if (w == 0 && h == 0) break;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> arr[i][j];
			}
		}
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				if (arr[i][j] == 1 && !check[i][j]) {
					bfs(i, j, w, h);
					ans++;
				}
			}
		}
		cout << ans << "\n";
		memset(arr, 0, sizeof(arr));
		memset(check, false, sizeof(check));
	}
}
