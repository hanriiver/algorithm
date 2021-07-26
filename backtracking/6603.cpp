#include <iostream>
#include <vector>
using namespace std;
int k;
int arr[14];
bool check[14];
vector<int> ans;
void go(int start, int index) {
	if (index == 6) {
		for (int i = 0; i < 6; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = start; i < k; i++) {
		if (check[i]) continue;
		ans.push_back(arr[i]);
		go(i + 1, index + 1);
		ans.pop_back();
		check[i] = false;
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	while (1) {
		cin >> k;
		if (k == 0) break;
		for (int i = 0; i < k; i++) cin >> arr[i];
		go(0, 0);
		cout << "\n";
	}
}