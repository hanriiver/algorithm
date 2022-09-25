#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int x, ans = 0;
	cin >> x;
	while (x > 0) {
		if (x % 2 == 1) {
			ans++;
		}
		x /= 2;
	}
	cout << ans;
}