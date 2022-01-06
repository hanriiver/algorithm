#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include<memory.h>
#include <stdio.h>
#include <map>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int T;
	cin >> T;
	while (T--) {
		map<string, int> m;
		int n, ans = 1;
		cin >> n;
		for (int i = 0; i < n; i++) {
			string s1, s2;
			cin >> s1 >> s2;
			m[s2]++;
		}
		for (auto k : m) {
			ans *= (k.second + 1);
		}
		cout << ans - 1 << "\n";
	}
}