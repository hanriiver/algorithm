#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
char arr[51][51];
char c1[8][8];
char c2[8][8];
string s = "WBWBWBWB";
string s1 = "BWBWBWBW";
int n, m, ans = 210000000;
void check(int x, int y) {
	int cnt1 = 0, cnt2 = 0;
	if (x + 8 > n || y + 8 > m) return;
	for (int i = x; i < x + 8; i++) {
		for (int j = y; j < y + 8; j++) {
			if (arr[i][j] != c1[i - x][j - y]) {
				cnt1++;
			}
			if (arr[i][j] != c2[i - x][j - y]) {
				cnt2++;
			}
		}
	}
	ans = min({ ans, cnt1, cnt2 });
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);


	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0) {
				c1[i][j] = s[j];
				c2[i][j] = s1[j];
			}
			else {
				c1[i][j] = s1[j];
				c2[i][j] = s[j];
			}
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			check(i, j);
		}
	}
	check(0, 0);
	cout << ans;
}