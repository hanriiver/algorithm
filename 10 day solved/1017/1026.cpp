#include<bits/stdc++.h>
using namespace std;
vector<int> v1;
vector<int> v2;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
	}
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		v2.push_back(x);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater<>());
	int ans = 0;
	for (int i = 0; i < n; i++) {
		ans += (v1[i] * v2[i]);
	}
	cout << ans;
}