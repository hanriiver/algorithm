#include<bits/stdc++.h>
using namespace std; 
string s;
int chk[26];
 int main()
{

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		if (chk[s[i] - 'a'] != 0)
			continue;
		else	chk[s[i] - 'a']=i+1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (chk[i]==0)
			cout << -1 << " ";

		else cout << chk[i] - 1 << " ";
	}
}