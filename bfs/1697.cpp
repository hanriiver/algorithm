#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
const int MAX = 200000;
int n, k;
bool check[MAX + 1];
int dist[MAX + 1];
queue<int> qu;
void bfs(int x) {
	qu.push(x);
	check[x] = true;
	while (!qu.empty()) {
		int ox = qu.front();
		qu.pop();
		if (ox + 1 <= MAX) {
			int nx = ox + 1;
			if (!check[nx]) {
				check[nx] = true;
				dist[nx] = dist[ox] + 1;
				qu.push(nx);
			}
		}
		if (ox - 1 >= 0) {
			int nx = ox - 1;
			if (!check[nx]) {
				check[nx] = true;
				dist[nx] = dist[ox] + 1;
				qu.push(nx);
			}
		}
		if (ox * 2 <= MAX) {
			int nx = ox * 2;
			if (!check[nx]) {
				check[nx] = true;
				dist[nx] = dist[ox] + 1;
				qu.push(nx);
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> k;
	bfs(n);
	cout << dist[k];
}