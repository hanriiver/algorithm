#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int n, cnt;
int arr[26][26];
int dx[4] = { -1,0,1,0 };
int dy[4] = { 0,1,0,-1 };
bool check[26][26];
vector<int> ans;
void dfs(int x, int y) {
	check[x][y] = true;
	cnt++;
	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx<0 || nx>n - 1 || ny<0 || ny>n - 1) continue;
		if (!check[nx][ny] && arr[nx][ny] == 1) {
			dfs(nx, ny);
		}
	}
}
int main() {
	//ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%1d", &arr[i][j]);
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (arr[i][j] == 1 && !check[i][j]) {
				dfs(i, j);
				ans.push_back(cnt);
				cnt = 0;
			}
		}
	}
	sort(ans.begin(), ans.end());
	printf("%d\n", ans.size());
	for (int i = 0; i < ans.size(); i++) printf("%d\n", ans[i]);
}