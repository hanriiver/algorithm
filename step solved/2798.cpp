#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <map>
using namespace std;
int score[101];
bool check[101];
int n, m, ans;
void go(int index, int cnt, int sum) {
	if (cnt == 3) {
		if (sum <= m) {
			if (ans < sum) {
				ans = sum;
			}
		}
		return;
	}
	for (int i = index; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		go(index + 1, cnt + 1, sum + score[i]);
		check[i] = false;
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> score[i];
	}
	go(0, 0, 0);
	cout << ans;
}

