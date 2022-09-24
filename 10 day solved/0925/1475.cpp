#include<bits/stdc++.h>
using namespace std;
int check[10];
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] - '0' == 9) {
			check[6]++;
		}
		else check[s[i] - '0']++;
	}
	int ans = 0;
	if (check[6] % 2 == 0) {
		ans = check[6] / 2;
	}
	else ans = check[6] / 2 + 1;

	for (int i = 0; i < 10; i++) {
		if (i == 6) continue;
		ans = max(ans, check[i]);
	}
	cout << ans;
}