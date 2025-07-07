#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
int n, m,ans;
int score[101];
bool check[101];
void go(int index, int num, int cnt) {
	if (cnt == 3) {
		if (num > m) {
			return;
		}
		if (ans < num) {
				ans = num;
			}
		
		return;
	}
	for(int i = index; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		go(i, num + score[i], cnt + 1);
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
