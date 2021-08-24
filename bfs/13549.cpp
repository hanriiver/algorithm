#include <iostream>
#include <limits.h>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
using namespace std;
int n, k;
bool check[100001];
int dist[100001];
deque<int> dq;
void bfs(int x) {
	dq.push_back(x);
	while (!dq.empty()) {
		int ox = dq.front();
		dq.pop_front();
		if (ox == k) return;
		if (ox * 2 <= 100001 && !check[ox * 2]) {
			dq.push_front(ox * 2);
			check[ox * 2] = true;
			dist[ox * 2] = dist[ox];
		}
		if (ox + 1 <= 100001 && !check[ox + 1]) {
			dq.push_back(ox + 1);
			check[ox + 1] = true;
			dist[ox + 1] = dist[ox] + 1;
		}
		if (ox - 1 >= 0 && !check[ox - 1]) {
			dq.push_back(ox - 1);
			check[ox - 1] = true;
			dist[ox - 1] = dist[ox] + 1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> k;
	bfs(n);
	cout << dist[k];
}