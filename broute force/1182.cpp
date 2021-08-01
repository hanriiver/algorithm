#include <iostream>
#include <vector>
using namespace std;
int n, s, ans = 0;
int arr[21];

void go(int sum, int index) {
	if (index == n) return;
	if (sum + arr[index] == s) {
		ans++;
	}
	go(sum, index + 1);
	go(sum + arr[index], index + 1);
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> s;
	for (int i = 0; i < n; i++) cin >> arr[i];
	go(0, 0);
	cout << ans;
}