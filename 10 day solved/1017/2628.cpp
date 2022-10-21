#include<bits/stdc++.h>
using namespace std;
vector<int> ga;
vector<int> sa;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n, m, k;
	cin >> n >> m >> k;
	ga.push_back(0);
	sa.push_back(0);
	ga.push_back(m);
	sa.push_back(n);
	for (int i = 0; i < k; i++) {
		int a, b;
		cin >> a >> b;
		if (a == 0) {
			ga.push_back(b);
		}
		else sa.push_back(b);
	}
	sort(ga.begin(), ga.end());
	sort(sa.begin(), sa.end());
	int temp = 0;
	int ans = 0;
	for (int i = 0; i < ga.size() - 1; i++) {
		for (int j = 0; j < sa.size() - 1; j++) {
			temp = (ga[i + 1] - ga[i]) * (sa[j + 1] - sa[j]);
			ans = max(temp, ans);
		}
	}
	cout << ans;
}