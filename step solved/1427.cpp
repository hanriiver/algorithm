#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
vector<char> v;
bool cmp(char a, char b) {
	if (a > b) {
		return true;
	}
	return false;
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		v.push_back(s[i]);
	}
	sort(v.begin(), v.end(), cmp);
	string ans = "";
	for (int i = 0; i < v.size(); i++) {
		ans += v[i];
	}
	cout << ans;
}

