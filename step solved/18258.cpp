#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
#include <stack>
using namespace std;
queue<int> qu;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		if (s == "push") {
			int x;
			cin >> x;
			qu.push(x);
		}
		else if (s == "front") {
			if (qu.empty()) cout << -1 << "\n";
			else cout << qu.front() << "\n";
		}
		else if (s == "back") {
			if (qu.empty()) cout << -1 << "\n";
			else cout << qu.back() << "\n";
		}
		else if (s == "size") {
			cout << qu.size() << "\n";
		}
		else if (s == "empty") {
			if (qu.empty()) cout << 1 << "\n";
			else cout << 0 << "\n";
		}
		else if (s == "pop") {
			if (qu.empty()) cout << -1 << "\n";
			else {
				cout << qu.front() << "\n";
				qu.pop();
			}
		}

	}
}