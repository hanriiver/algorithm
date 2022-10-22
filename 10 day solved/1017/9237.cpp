#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		v.push_back(t);
	}
	sort(v.begin(), v.end(), greater<>());
	int ans = -1;
	int day = 1;
	for (int i = 0; i < n; i++) {
		ans = max(ans, v[i] + day);
		day++;
	}
	cout << ans + 1;
}