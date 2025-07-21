#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int n, m;
vector<int> v;
vector<int> ans;
bool check[9];
void go(int index) {
	if (ans.size() == m) {
		for (auto k : ans) {
			cout << k << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = 0; i < n; i++) {
		if (check[i]) continue;
		check[i] = true;
		ans.push_back(v[i]);
		go(i + 1);
		ans.pop_back();
		check[i] = false;
	}

}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		v.push_back(i);
	}
	go(0);
}