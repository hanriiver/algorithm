#include <iostream>
#include <vector>
using namespace std;
int n, m;
int arr[8];
vector<int> ans;
void go(int index) {
	if (index == m) {
		for (int i = 0; i < m; i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		ans.push_back(arr[i]);
		go(index + 1);
		ans.pop_back();
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	go(0);
}