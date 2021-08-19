#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
const int MAX = 200000;
int n, k;
int dist[MAX + 1];
int from[MAX + 1];
queue<int> qu;
void go(int p) {
	if (p == n) {
		cout << p << " ";
		return;
	}
	go(from[p]);
	cout << p << " ";
}
void bfs(int x) {
	qu.push(x);
	dist[x] = 1;
	while (!qu.empty()) {
		int ox = qu.front();
		qu.pop();
		if (ox + 1 <= MAX) {
			int nx = ox + 1;
			if (dist[nx]==0) {
				dist[nx] = dist[ox] + 1;
				from[nx] = ox;
				qu.push(nx);
			}
		}
		if (ox - 1 >= 0) {
			int nx = ox - 1;
			if (dist[nx]==0) {
				dist[nx] = dist[ox] + 1;
				from[nx] = ox;
				qu.push(nx);
			}
		}
		if (ox * 2 <= MAX) {
			int nx = ox * 2;
			if (dist[nx]==0) {
				dist[nx] = dist[ox] + 1;
				from[nx] = ox;
				qu.push(nx);
			}
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> k;
	bfs(n);
	cout << dist[k]-1<<"\n";
	go(k);
}