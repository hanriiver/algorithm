#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
using namespace std;
int n, k;
queue<int> qu;
int dist[200001];
void bfs(int x) {
	qu.push(x);
	dist[x] = 1;
	while (!qu.empty()) {
		int ox = qu.front();
		qu.pop();
		if (ox - 1 >= 0) {
			int nx = ox - 1;
			if (dist[nx] == 0) {
				qu.push(nx);
				dist[nx] = dist[ox] + 1;
			}
		}
		if (ox + 1 <= 200000) {
			int nx = ox + 1;
			if (dist[nx] == 0) {
				qu.push(nx);
				dist[nx] = dist[ox] + 1;
			}
		}
		if (ox * 2 <= 200000) {
			int nx = ox * 2;
			if (dist[nx] == 0) {
				qu.push(nx);
				dist[nx] = dist[ox] + 1;
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> k;
	bfs(n);
	cout << dist[k] - 1;
}
