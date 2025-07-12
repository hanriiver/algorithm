#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
vector<pair<string,int>> v;
vector<string> v1;
int n, m;
int binsearch(string ans) {
	int s = 0, e = n-1;
	while (s<=e) {
		int mid = (s + e) / 2;
		if (v[mid].first < ans) {
			s = mid + 1;
		}
		else if (v[mid].first == ans) {
			return v[mid].second;
		}
		else if (v[mid].first > ans) {
			e = mid - 1;
		}
	}
}
int main() {
	ios_base::sync_with_stdio(false), cin.tie(NULL);
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		v.push_back({ s,i + 1 });
		v1.push_back(s);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < m; i++) {
		string target;
		cin >> target;
		if (('a' <= target[0] && target[0] <= 'z') || ('A' <= target[0] && target[0] <= 'Z')) {
			cout << binsearch(target)<<"\n";
		}
		else {
			int num = stoi(target)-1;
			cout << v1[num]<<"\n";
		}
	}
}
