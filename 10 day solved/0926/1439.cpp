#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	string s;
	cin >> s;
	int zeroCnt = 0, oneCnt = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[i + 1]) {
			if (s[i] == '0') zeroCnt++;
			else oneCnt++;
		}
	}
	cout << min(zeroCnt, oneCnt);
}