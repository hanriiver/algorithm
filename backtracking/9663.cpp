#include <iostream>

using namespace std;
int col[15];
int n, cnt = 0;
bool check(int q) {
	for (int i = 0; i < q; i++) {
		if (col[i] == col[q]) return false;
		if (abs(col[q] - col[i]) == q - i) return false;
	}
	return true;
}
void solve(int here) {
	if (here == n) {
		cnt++;
	}
	else {
		for (int i = 0; i < n; i++) {
			col[here] = i;
			if (check(here)) solve(here + 1);
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
	cin >> n;
	solve(0);
	cout << cnt;
}