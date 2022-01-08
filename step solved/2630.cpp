#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <stdio.h>
#include <stack>
#include <string>
#include <deque>
using namespace std;
int arr[129][129];
int blue, white;
void solved(int x, int y, int n) {
	if (n == 1) {
		if (arr[y][x] == 1) {
			blue++;
		}
		else white++;
		return;
	}
	bool flag = true;
	for (int i = y; i < y + n; i++) {
		for (int j = x; j < x + n; j++) {
			if (arr[y][x] != arr[i][j]) {
				flag = false;
				break;
			}
		}
	}
	if (flag) {
		if (arr[y][x] == 1) {
			blue++;
		}
		else white++;
		return;
	}
	int n4 = n / 2;
	solved(x, y, n4);
	solved(x + n4, y, n4);
	solved(x, y + n4, n4);
	solved(x + n4, y + n4, n4);
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}
	solved(0, 0, n);
	cout << white << "\n" << blue;
}