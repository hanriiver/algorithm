#include <iostream>
#include <vector>
using namespace std;
int n;
int arr[9];
bool check[9];
vector<int> ans;
void go(int index) {
	if (index == n) {
		for (int i = 0; i < n; i++) cout << ans[i] << " ";
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		ans.push_back(arr[i]);
		go(index + 1);
		check[i] = false;
		ans.pop_back();
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) arr[i] = i + 1;
	go(0);
}