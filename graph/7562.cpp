#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int l;
int dx[8] = { 1,2,2,1,-1,-2,-1,-2 };
int dy[8] = { 2,1,-1,-2,-2,-1,2,1 };
int check[301][301];
queue<pair<int, int>> qu;
void bfs(int x, int y) {
	qu.push({ x,y });
	check[x][y] = 1;
	while (!qu.empty()) {
		int ox = qu.front().first;
		int oy = qu.front().second;
		qu.pop();
		for (int i = 0; i < 8; i++) {
			int nx = ox + dx[i];
			int ny = oy + dy[i];
			if (nx<0 || nx>l - 1 || ny<0 || ny>l - 1) continue;
			if (check[nx][ny] == 0) {
				check[nx][ny] = check[ox][oy] + 1;
				qu.push({ nx,ny });
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		int x, y, z, k;
		cin >> l >> x >> y >> z >> k;
		bfs(x, y);

		cout << check[z][k] - 1 << "\n";
		memset(check, 0, sizeof(check));
	}
}