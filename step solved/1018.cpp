#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
string color1[8];
string color2[8];
string chess[51];
int n, m, ans = 987654321;
void go(int y, int x) {
	int count1 = 0, count2 = 0;
	if (y + 8 > n || x + 8 > m) {
		return;
	}
	for (int i = y; i < y + 8; i++) {
		for (int j = x; j < x + 8; j++) {
			if (chess[i][j] != color1[i - y][j - x]) {
				count1++;
			}
			if (chess[i][j] != color2[i - y][j - x]) {
				count2++;
			}
		}
	}
	ans = min({ count1,count2,ans });
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> chess[i];
	}
	for (int i = 0; i < 8; i++) {
		if (i % 2 == 0) {
			color1[i] = "WBWBWBWB";
			color2[i] = "BWBWBWBW";
		}
		else {
			color1[i] = "BWBWBWBW";
			color2[i] = "WBWBWBWB";
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			go(i, j);
		}
	}
	cout << ans;
}

