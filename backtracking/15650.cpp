#include <iostream>
#include <vector>
using namespace std;

int n, m;
int arr[9];
bool check[9];
vector<int> ans;
void go(int start, int index) {
	if (index == m) {
		for (int i = 0; i < m; i++) cout << ans[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = start; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		ans.push_back(arr[i]);
		go(i + 1, index + 1);
		ans.pop_back();
		check[i] = false;
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	go(0, 0);
}