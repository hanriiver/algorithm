#include<bits/stdc++.h>
using namespace std;
int n;
vector < pair<string, pair<pair<int, int>, int>>> v;
bool cmp(pair<string, pair<pair<int, int>, int>> a, pair<string, pair<pair<int, int>, int>> b) {
	if (a.second.second > b.second.second) {
		return true;
	}
	else if (a.second.second == b.second.second) {
		if (a.second.first.second > b.second.first.second) {
			return true;
		}
		else if (a.second.first.second == b.second.first.second) {
			if (a.second.first.first > b.second.first.first) {
				return true;
			}
			else return false;
		}
		else return false;
	}
	else return false;
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		int dd, mm, yyyy;
		cin >> s >> dd >> mm >> yyyy;
		v.push_back({ s,{{dd,mm},yyyy} });
	}
	sort(v.begin(), v.end(), cmp);
	cout << v[0].first << "\n" << v[n - 1].first;
}