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

// 플로이드 워샬 알고리즘 적용
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <memory.h>
using namespace std;
int arr[101][101];
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, m;
	int person = 987654321;
	int ans;
	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int x, y;
		cin >> x >> y;
		arr[x][y] = 1;
		arr[y][x] = 1;
	}
	for (int k = 1; k <= n; k++) { // 중간점 역할
		for (int i = 1; i <= n; i++) { // 시작점 역할
			for (int j = 1; j <= n; j++) { // 도착점 역할
				if (i == j) continue;
				else if (arr[i][k] != 0 && arr[k][j] != 0) {
					if (arr[i][j] == 0) { // 시작점과 끝점이 연결이 안되어있거나 값이 없는경우
						arr[i][j] = arr[i][k] + arr[k][j];
					}
					else {
						arr[i][j] = min(arr[i][j], arr[i][k] + arr[k][j]);
					}
				}
			}
		}
	}
	for (int i = 1; i <= n; i++) {
		int temp = 0;
		for (int j = 1; j <= n; j++) {
			if (i == j) continue;
			temp += arr[i][j];
		}
		if (person > temp) {
			person = temp;
			ans = i;
		}
	}
	cout << ans;
}
