#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
queue<int> qu;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		qu.push(i + 1);
	}
	while (!qu.empty()) {
		if (qu.size() == 1) {
			cout << qu.front();
			return 0;
		}
		qu.pop();
		int down = qu.front();
		qu.pop();
		qu.push(down);
	}
}