#include<bits/stdc++.h>
using namespace std;
map<string, bool> m1;
vector<string> v;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string a, b;
		cin >> a >> b;
		if (!m1[a] && b == "enter") {
			m1[a] = true;
		}
		else if (m1[a] && b == "leave") {
			m1[a] = false;
		}
	}
	for (auto k : m1) {
		if (k.second) {
			v.push_back(k.first);
		}
	}
	sort(v.begin(), v.end());
	reverse(v.begin(), v.end());
	for (auto k : v) {
		cout << k << "\n";
	}
}