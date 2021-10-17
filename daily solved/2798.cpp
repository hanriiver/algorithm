#include <iostream>
#include <algorithm>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
bool check[101];
int arr[101];
int n, m, ans;
vector<int> v;
void go(int index, int cnt) {
	if (cnt == 3) {
		int sum = 0;
		for (auto k : v) {
			sum += k;
		}
		if (sum <= m) {
			if (sum > ans) {
				ans = sum;
			}
		}
		return;
	}
	for (int i = index; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		v.push_back(arr[i]);
		go(i, cnt + 1);
		v.pop_back();
		check[i] = false;
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);

	cin >> n >> m;
	for (int i = 0; i < n; i++) cin >> arr[i];
	go(0, 0);
	cout << ans;
}
