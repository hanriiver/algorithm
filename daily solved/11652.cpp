#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;
map<long long, long long > m;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n;
	long long ans = 0, key = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		long long key;
		cin >> key;
		m[key]++;
	}
	map<long long, long long>::iterator iter;
	for (iter = m.begin(); iter != m.end(); iter++) {
		if (ans < iter->second) {
			ans = iter->second;
			key = iter->first;
		}
	}
	cout << key;
}
