#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
#include <deque>
using namespace std;
string s[65];
void solved(int x, int y, int n) {
	if (n == 1) {
		cout << s[y][x];
		return;
	}
	bool flag = true;
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (s[y][x] != s[i][j]) {
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		cout << s[y][x];
		return;
	}
	int n4 = n / 2;
	cout << "(";
	solved(x, y, n4);
	solved(x + n4, y, n4);
	solved(x, y + n4, n4);
	solved(x + n4, y + n4, n4);
	cout << ")";
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	solved(0, 0, n);
}