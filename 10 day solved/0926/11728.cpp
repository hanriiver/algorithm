#include<bits/stdc++.h>
using namespace std;
vector<int> v1;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n + m; i++) {
		int x;
		cin >> x;
		v1.push_back(x);
	}
	sort(v1.begin(), v1.end());
	for (auto k : v1) {
		cout << k << " ";
	}
}