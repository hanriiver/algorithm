#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
int n, m;
int arr[9];
vector<int> v;
void go(int index, int cnt) {
	if (cnt == m) {
		for (auto k : v) {
			cout << k << " ";
		}
		cout << "\n";
		return;
	}
	for (int i = index; i < n; i++) {
		v.push_back(arr[i]);
		go(i, cnt + 1);
		v.pop_back();

	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		arr[i] = i + 1;
	}
	go(0, 0);
}

