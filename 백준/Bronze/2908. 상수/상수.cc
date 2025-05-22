#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	 
	string a1, b1;
	int a2=0, b2=0;
	cin >> a1 >> b1;
	for (int i = 2; i >= 0; i--) {
		a2 *= 10;
		b2 *= 10;
		a2 += a1[i] - '0';
		b2 += b1[i] - '0';
	}
	int ans = 0;
	ans = max(a2, b2);
	cout << ans;
	 
}
