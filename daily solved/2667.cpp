#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <memory.h>
using namespace std;
int arr[26][26];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
bool check[26][26];
int n, cnt;
queue<pair<int, int>> qu;
vector<int> v;
void bfs(int y, int x) {
	int ans = 0;
	qu.push({ y,x });
	check[y][x] = true;
	while (!qu.empty()) {
		int oy = qu.front().first;
		int ox = qu.front().second;
		qu.pop();
		for (int i = 0; i < 4; i++) {
			int ny = oy + dy[i];
			int nx = ox + dx[i];
			if (ny < 0 || ny >= n || nx < 0 || ny >= n) continue;
			if (!check[ny][nx] && arr[ny][nx] == 1) {
				qu.push({ ny,nx });
				check[ny][nx] = true;
				ans++;
			}
		}
	}
	v.push_back(ans);
	cnt++;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		for (int j = 0; j < n; j++) {
			arr[i][j] = s[j] - '0';
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1 && !check[i][j]) {
				bfs(i, j);
			}
		}
	}
	cout << cnt << "\n";
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] + 1 << "\n";
	}
}
