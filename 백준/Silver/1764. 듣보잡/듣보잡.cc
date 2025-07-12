#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;
map<string,int> m1;
vector<string> v;
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n+m; i++) {
		string s;
		cin >> s;
		m1[s]++;
	}
	for (auto iter = m1.begin(); iter != m1.end(); iter++) {
		if (iter->second > 1) {
			v.push_back(iter->first);
		}
	}
	cout << v.size()<<"\n";
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << "\n";
	}
}
