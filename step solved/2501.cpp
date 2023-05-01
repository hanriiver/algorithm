#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) v.push_back(i);
	}
	if (k > v.size()) cout << 0;
	else cout << v[k - 1];
}