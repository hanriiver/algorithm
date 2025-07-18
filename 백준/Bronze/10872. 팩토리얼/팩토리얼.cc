#include <bits/stdc++.h>
using namespace std;
int factory(int n) {

	if (n==0||n==1) {
		return 1;
	}
	else {
		return factory(n - 1) * n;
	}
}
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	int n,ans=0;
	cin >> n;
	ans = factory(n);
	cout << ans;
}
 