#include<bits/stdc++.h>
using namespace std;
vector<pair<int, int>> v;
vector<int> idx;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	for (int i = 0; i < 8; i++) {
		int x;
		cin >> x;
		v.push_back({ x,i + 1 });
	}
	sort(v.begin(), v.end());
	int sum = 0;
	for (int i = 3; i < v.size(); i++) {
		sum += v[i].first;
	}
	cout << sum << "\n";
	for (int i = 3; i < v.size(); i++) {
		idx.push_back(v[i].second);
	}
	sort(idx.begin(), idx.end());
	for (auto k : idx) {
		cout << k << " ";
	}
}